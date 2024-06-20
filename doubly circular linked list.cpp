#include <iostream>
using namespace std;

// Node structure for circular doubly linked list
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    // Constructor
    Node(int d) {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    // Destructor
    ~Node() {
        int val = this->data;
        if (this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "Deleted value is: " << val << endl;
    }
};

// Function to insert a node into the circular doubly linked list
// Here, element means the node after which the new node will be inserted
void insertNode(Node*& tail, int element, int d) {
    // If the list is empty
    if (tail == NULL) {
        Node* newNode = new Node(d);
        newNode->next = newNode;
        newNode->prev = newNode;
        tail = newNode;
    }
    // Insertion when there is at least one element
    else {
        Node* curr = tail;
        while (curr->data != element) {
            curr = curr->next;
        }
        Node* newNode = new Node(d);
        newNode->next = curr->next;
        newNode->prev = curr;
        curr->next->prev = newNode;
        curr->next = newNode;
    }
}

// Function to print the circular doubly linked list
void print(Node*& tail) {
    if (tail == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    Node* temp = tail;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);
    cout << endl;
}

// Function to delete a node from the circular doubly linked list
// Here, element means the node that will be deleted
void deleteNode(Node*& tail, int element) {
    if (tail == NULL) {
        cout << "List is empty, so data cannot be deleted." << endl;
        return;
    }
    else {
        Node* prev = tail;
        Node* curr = prev->next;
        while (curr->data != element) {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        curr->next->prev = prev;
        if (curr == prev) { // When only one node remains
            tail = NULL;
        }
        if (tail == curr) {
            tail = prev;
        }
        curr->next = NULL;
        curr->prev = NULL;
        delete curr;
    }
}

int main() {
    Node* tail = NULL;

    // Insertion
    insertNode(tail, 5, 3);
    print(tail);
    insertNode(tail, 3, 5);
    print(tail);
    insertNode(tail, 3, 15);
    print(tail);

    // Deletion
    insertNode(tail, 5, 3);
    print(tail);
    insertNode(tail, 3, 5);
    print(tail);
    insertNode(tail, 3, 15);
    print(tail);
    insertNode(tail, 3, 25);
    print(tail);
    insertNode(tail, 15, 35);
    print(tail);
    deleteNode(tail, 15);
    print(tail);

    return 0;
}
