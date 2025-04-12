#include <iostream>

// Node structure representing a node in the linked list
struct Node {
    int data;
    Node* next;

    // Constructor to initialize a node with data
    Node(int value) : data(value), next(nullptr) {}
};

// Function to find the middle of the linked list
Node* findMiddle(Node* head) {
    if (head == nullptr) {
        return nullptr; // Empty list
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

// Function to print the linked list
void printLinkedList(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << "\n";
}

int main() {
    // Creating a sample linked list: 1 -> 2 -> 3 -> ... -> 100
    Node* head = nullptr; // Initialize head to null

    // Create nodes in a loop and append to the linked list
    for (int i = 1; i <= 100; ++i) {
        if (head == nullptr) {
            head = new Node(i); // Create the first node
        } else {
            // Traverse the list to the end and append a new node
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = new Node(i);
        }
    }


    std::cout << "Original Linked List: ";
    printLinkedList(head);

    // Find the middle of the linked list
    Node* middleNode = findMiddle(head);

    if (middleNode != nullptr) {
        std::cout << "Middle of the Linked List: " << middleNode->data << "\n";
    } else {
        std::cout << "Linked List is empty.\n";
    }

    return 0;
}
