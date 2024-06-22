// struct Node
// {
//     int data;
//     Node* next;
    
//     Node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// */

// class Solution
// {
//     public:
//     //Function to remove a loop in the linked list.
//     void removeLoop(Node* head)
//     {
// Node*fast=head;
// Node*slow=head;

// while(fast!=NULL){
//     fast=fast->next;
//   if(fast!=NULL){
//     fast=fast->next;
//     slow=slow->next;
//   }
  
//   if(fast==slow){
//     break;
//   }

// }
// if(fast!=slow) return;
// slow=head;
//  // Handling the special case where slow and fast meet at head
//  //isme hame phle 1 cycle complete krni hogi fast ko badhakar jab tak fast ka next slow ke equal na ho jaye aur slow ko kuch nhi karna hai tab tk
//         if (slow == fast) {
//             while (fast->next != slow) {
//                 fast = fast->next;
//             }
//         } else {
//             // Move slow and fast one step at a time until they meet
//             while (slow->next != fast->next) {
//                 slow = slow->next;
//                 fast = fast->next;
//             }
//         }
// fast->next=NULL;

//     }