// /**   leetcode25


//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */




// class Solution {
// public:
    
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev=NULL;
//         ListNode* curr=head;
//         while(curr!=NULL){
//             ListNode* temp=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=temp;
//         }
//         head=prev;
//         return head;

//     }

// int length_linked_list(ListNode* head){
//     int count=0;
//     ListNode* temp=head;
//     if(head==NULL){
//         return 0;
//     }
//     while(temp!=NULL){
//         count++;
//         temp=temp->next;
//     }
//     return count;
// }

   
//     ListNode* reverseKGroup(ListNode* head, int k) {

//         if(head==NULL || head->next==NULL || length_linked_list(head)<k){
//              return head; 
//         }

//         ListNode* prev=NULL;
//         ListNode* curr=head;
//         ListNode* nextnode=curr->next;
        
//         int pos=0;
//         while(pos<k){
//             pos++;
//             nextnode=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=nextnode;
//         }
        
//         ListNode* Recans=NULL;
//         if(nextnode!=NULL){
//           Recans=reverseKGroup(nextnode, k) ;
//         }
//         head->next=Recans;
//         return prev;
//     }
// };