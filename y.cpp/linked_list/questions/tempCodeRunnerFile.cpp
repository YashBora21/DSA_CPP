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
        head = temp;  // The first node in the list
        head->next = head;  // Circularly points to itself
    } else {
        node* current = head;
        int cnt = 1;
        
        // Traverse to the desired position
        while (cnt < position - 1 && current->next != head) {
            current = current->next;
            cnt++;
        }

        // Insert the new node after the current node
        temp->next = current->next;
        current->next = temp;
    }
}

// Function to print nodes from position s to e in a circular list
void print(node* head, int s, int e) {
    if (head == nullptr) {
        cout << "No elements to print" << endl;
        return;
    }

    node* temp = head;
    int cnt = 0;

    // Traverse to the start position
    while (cnt < s && temp->next != head) {
        temp = temp->next;
        cnt++;
    }

    // Print from position s to e
    int midcnt = 0;
    while (midcnt < e && temp != head) {
        cout << temp->data << " ";
        temp = temp->next;
        midcnt++;
        // Stop when we return to the head (circular list completion)
        if (temp == head) break;
    }

    cout << endl;
}

// Function to find and print the two halves of the circular list
void mid(node* head) {
    if (head == nullptr) {
        cout << "Empty list" << endl;
        return;
    }

    node* temp = head;
    int cnt = 0;

    // Count the number of nodes in the circular list
    do {
        temp = temp->next;
        cnt++;
    } while (temp != head);

    // Find the middle of the list
    int middle = cnt / 2;

    // Print the first half of the list
    print(head, 0, middle);

    // Print the second half of the list
    print(head, middle, cnt);
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

