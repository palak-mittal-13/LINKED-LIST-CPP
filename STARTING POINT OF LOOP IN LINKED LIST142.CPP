//LEETCODE 142


// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */




// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* fast=head;
//         ListNode* slow=head;
//         while(fast!=NULL){
//             fast=fast->next;
//             if(fast!=NULL){
//                 fast=fast->next;
//                 slow=slow->next;
//             }
//             if(fast==slow){
//                 break;
//             }
//         }
//          if(fast!=slow){
//                 return NULL;
//             }
//         slow=head;
//         while(fast!=slow){
//              fast=fast->next;
//              slow=slow->next;
//         }
//         return slow;
//     }
// };


/*

step1:approach ye hai ki phele ye check karna hai ki loop hai ya nahi
step2: jab loop confirm ho jaye phir slow ko head par point karna hai fast ko bilkul nhi touch karna hai woh jahan par hai use rehne dein
step3: ab slow and fast dono ko one-one step aage badhana hai jab tak (fast==slow) na ho jaye tab tak
step4: ab fast and slow same node ko point kar rahe honge toh dono me se kisi ko bhi return kara de kyonki ye dono hi starting poin wali node ko point kar rahe honge

*/