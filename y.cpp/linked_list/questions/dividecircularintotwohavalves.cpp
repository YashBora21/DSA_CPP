#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Function to insert a node at a specific position in the circular list
void insert(node*& head, int position, int d) {
    node* temp = new node(d);

    if (head == nullptr) {
        head = temp;
        head->next = head;  // Circularly points to itself
    } else {
        node* current = head;
        int cnt = 1;

        // Traverse to the desired position
        while (cnt < position - 1 && current->next != head) {
            current = current->next;
            cnt++;
        }

        temp->next = current->next;
        current->next = temp;

        // If inserting at position 1, update head
        if (position == 1) {
            head = temp;
        }
    }
}

// Function to print nodes starting from any node for a given count in a circular list
void print(node* head, int count) {
    if (head == nullptr) {
        cout << "No elements to print" << endl;
        return;
    }

    node* temp = head;
    int cnt = 0;

    // Print the list until count is reached
    while (cnt < count) {
        cout << temp->data << " ";
        temp = temp->next;
        cnt++;
        if (temp == head) break;  // Stop when we circle back to the head
    }
    cout << endl;
}

// Function to find and print the two halves of the circular list
void mid(node* head) {
    if (head == nullptr) {
        cout << "Empty list" << endl;
        return;
    }

    node *slow = head, *fast = head;
    
    // Use two pointers to find the middle of the list
    while (fast->next != head && fast->next->next != head) {
        slow = slow->next;      // Slow pointer moves one step
        fast = fast->next->next; // Fast pointer moves two steps
    }

    // Now slow is at the middle of the list
    node* secondHalf = slow->next;
    slow->next = head;  // End the first half

    // Count nodes in the first half
    node* temp = head;
    int cnt1 = 0;
    do {
        cnt1++;
        temp = temp->next;
    } while (temp != slow->next);

    // Count nodes in the second half
    int cnt2 = 0;
    temp = secondHalf;
    do {
        cnt2++;
        temp = temp->next;
    } while (temp != head);

    // Print the two halves
    cout << "First Half: ";
    print(head, cnt1);  // Print from head to the middle

    cout << "Second Half: ";
    print(secondHalf, cnt2);  // Print from second half node
}

int main() {
    node* head = nullptr;
    insert(head, 1, 3); // 1st position, data = 3
    insert(head, 2, 5); // 2nd position, data = 5
    insert(head, 3, 6); // 3rd position, data = 6
    insert(head, 4, 4); // 4th position, data = 4
    insert(head, 5, 5); // 5th position, data = 5
    insert(head, 6, 9); // 6th position, data = 9

    // Print the two halves of the circular list
    mid(head);

    return 0;
}
