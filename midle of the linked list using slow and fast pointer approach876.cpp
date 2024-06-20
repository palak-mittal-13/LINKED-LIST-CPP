/*
slow and fast approach is also called tortoise algorithm

fast and slow pointers initially head node ko point karenge
approach is ki jab fast wala 2 steps chal lega tabhi slow wala 1 step chalega
and yeh tab tk hoga jab tk fast chal skta hai mtlb null aane se phle tk aur phir jahan par slow hoga wahi node middle node hogi

fast null tk ja skta hai lekin uske aage nahi ja skta
lekin ham traverse krte time yeh bhi check karenge ki kahin fast 1 step badhne ke baad null to nahi ho raha uske baad me hi usko ek step aur badayenge

isme even length wali linked list me 2nd wali node ko lenge
agar 1st wali node chahiye then ham check karenge fast->next!=NULL

*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/*

class Solution {
public:
   
    ListNode* middleNode(ListNode* head) {
        
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
        }
        
        return slow;
    }
};


*/

/*isme even length wali linked list me 1st wali node ko lenge

ListNode* middleNode(ListNode* head) {
        
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL){
            fast=fast->next;
            if(fast->next!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
        }
        
        return slow;
    }



*/