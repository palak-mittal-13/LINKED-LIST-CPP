/*

approach1: compare original and reverse of linked list (more space complexity O(length of linked list))

approach2: break linked list into 2 halves using middle point of it then reverse second half of linked list and then compare both halves (agar isme inplace ke liye bola hai aur ham space ni lena chahte toh original linked list ko use karna padega which is not a good practice)


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
        while(fast->next!=NULL){
            fast=fast->next;
            if(fast->next!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
        }
        return slow;
    }
    

    ListNode* reverseList(ListNode* head) {
        
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        head=prev;
        return head;

    }

    
    bool compareList(ListNode*head1,ListNode*head2){

      //ya keval while(head2!=null) se bhi submit ho jayega kyuki hamesha head2 wali linked list hi choti ya equal hogi head1 wali se

        while(head1!=NULL && head2!=NULL){
            if(head1->val != head2->val) {
                return false;
            }
            else{
                head1=head1->next;
                head2=head2->next;
            }
        }
        return true;
    }

    bool isPalindrome(ListNode* head) {

        //break into 2 halves
        ListNode* midNode=middleNode(head);
        ListNode* head2=midNode->next;
        midNode->next=NULL;

        //reverse 2nd linked list
        head2= reverseList(head2);

       //compare both linked list
       bool ans= compareList(head,head2);

       return ans;

    }
};

*/