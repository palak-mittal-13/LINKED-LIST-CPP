// struct Node {
//     int data;
//     struct Node* next;

//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     Node* reverseList(Node* head) {
//         Node* prev = NULL;
//         Node* curr = head;
//         while (curr != NULL) {
//             Node* temp = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = temp;
//         }
//         return prev;
//     }

//     Node* addOne(Node* head) {
//         if (head == NULL) return new Node(1);
//         if (head->next == NULL) {
//             head->data += 1;
//             if (head->data > 9) {
//                 head->data %= 10;
//                 Node* newNode = new Node(1);
//                 newNode->next = head;
//                 head = newNode;
//             }
//             return head;
//         }

//         // Step 1: Reverse the linked list
//         head = reverseList(head);

//         // Step 2: Add 1 to the reversed list
//         Node* temp = head;
//         temp->data += 1;
//         Node* prev = NULL;
//         while (temp != NULL && temp->data > 9) {
//             temp->data %= 10;
//             prev = temp;
//             temp = temp->next;
//             if (temp != NULL) {
//                 temp->data += 1;
//             }
//         }

//         // If carry is still there after the last node, add a new node
//         if (temp == NULL && prev->data == 0) {
//             prev->next = new Node(1);
//         }

//         // Step 3: Reverse the linked list back to the original order
//         return reverseList(head);
//     }
// };

// // Helper function to print the linked list
// void printList(Node* node) {
//     while (node != NULL) {
//         cout << node->data << " ";
//         node = node->next;
//     }
//     cout << endl;
// }
