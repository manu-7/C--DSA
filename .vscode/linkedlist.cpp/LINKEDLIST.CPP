 #include <iostream>

// Node structure
struct Node {
    int data;
    Node* next;
};

// Insertion at the Beginning
void insertAtBeginning(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

// Insertion at the End
void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Deletion of a Node
void deleteNode(Node*& head, int target) {
    if (head == nullptr) {
        return;
    }

    if (head->data == target) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != target) {
        temp = temp->next;
    }

    if (temp->next == nullptr) {
        return; // Node with the given data not found
    }

    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

// Traversal and Display
void displayList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* head = nullptr;

    insertAtBeginning(head, 3);
    insertAtBeginning(head, 2);
    insertAtBeginning(head, 1);

    std::cout << "Linked List: ";
    displayList(head); // Output: 1 2 3

    insertAtEnd(head, 4);
    std::cout << "Linked List after insertion at end: ";
    displayList(head); // Output: 1 2 3 4

    deleteNode(head, 2);
    std::cout << "Linked List after deleting node with data 2: ";
    displayList(head); // Output: 1 3 4

    // Deallocate memory to prevent memory leaks
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
