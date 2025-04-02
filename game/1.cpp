#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

class Item {
private:
    std::string name;
    int quantity;
    float price;

public:
    Item(std::string name, int quantity, float price) :
        name{std::move(name)}, 
        quantity{quantity}, 
        price{price} {}

    std::string get_name() const { return name; }
    int get_quantity() const { return quantity; }
    float get_price() const { return price; }

    void set_quantity(int new_quantity) { 
        if (new_quantity < 0) 
            throw std::invalid_argument("Quantity cannot be negative");
        quantity = new_quantity; 
    }

    bool is_match(const std::string &other) const {
        return name == other;
    }
};

class Inventory {
private:
    std::vector<Item*> items;
    float total_money;

    static void display_data(const Item &item) {
        std::cout << "\nItem name: " << item.get_name();
        std::cout << "\nQuantity: " << item.get_quantity();
        std::cout << "\nPrice: " << item.get_price();
    }

public:
    Inventory() : total_money{0} {}

    ~Inventory() {
        // Clean up dynamically allocated memory
        for (auto* item : items) {
            delete item;
        }
    }

    void add_item() {
        std::string name;
        int quantity;
        float price;

        std::cin.ignore();
        std::cout << "\nEnter item name: ";
        std::getline(std::cin, name);
        std::cout << "Enter quantity: ";
        std::cin >> quantity;
        std::cout << "Enter price: ";
        std::cin >> price;

        // Check for duplicate items
        auto it = std::find_if(items.begin(), items.end(), 
            [&name](const Item* item) { return item->get_name() == name; });

        if (it != items.end()) {
            // Update existing item quantity
            (*it)->set_quantity((*it)->get_quantity() + quantity);
        } else {
            // Add new item
            items.push_back(new Item(name, quantity, price));
        }
    }

    void sell_item() {
        std::string item_to_check;
        std::cin.ignore();
        std::cout << "\nEnter item name: ";
        std::getline(std::cin, item_to_check);

        auto it = std::find_if(items.begin(), items.end(), 
            [&item_to_check](const Item* item) { 
                return item->is_match(item_to_check); 
            });

        if (it != items.end()) {
            remove_item(*it);
        } else {
            std::cout << "\nThis item is not in your Inventory";
        }
    }

    void remove_item(Item* item) {
        int input_quantity;
        std::cout << "\nEnter number of items to sell: ";
        std::cin >> input_quantity;

        int current_quantity = item->get_quantity();
        if (input_quantity <= current_quantity) {
            float price = item->get_price();
            float money_earned = price * input_quantity;
            
            // Update quantity
            item->set_quantity(current_quantity - input_quantity);
            
            std::cout << "\nItems sold";
            std::cout << "\nMoney received: " << money_earned;
            total_money += money_earned;

            // Remove item if quantity becomes zero
            if (item->get_quantity() == 0) {
                auto it = std::find(items.begin(), items.end(), item);
                if (it != items.end()) {
                    delete *it;
                    items.erase(it);
                }
            }
        } else {
            std::cout << "\nCannot sell more items than you have.";
        }
    }

    void list_items() {
        if (items.empty()) {
            std::cout << "\nInventory empty.";
            return;
        }

        for (const auto* item : items) {
            display_data(*item);
            std::cout << "\n";
        }
    }
};
