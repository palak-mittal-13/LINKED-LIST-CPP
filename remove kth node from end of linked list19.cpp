/**  leetcode 19
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
    ListNode* removeNthFromEnd(ListNode* head, int k) {
        int len=length_linked_list(head);
        if(len<k) return NULL;

    if (len == k) { // If k is equal to the length of the list, remove the head
            ListNode* toDelete = head;
            head = head->next;
            delete toDelete;
            return head;
        }

        ListNode* temp=head;
        int t=len-k-1;
        while(t>0){
            t--;
            temp=temp->next;
        }
        ListNode* remNode=temp->next;
        temp->next=remNode->next;
        remNode->next=NULL;
        delete remNode;
        
        return head;
    }

    int length_linked_list(ListNode* head){
    int count=0;
    ListNode* temp=head;
    if(head==NULL){
        return 0;
    }
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

};
*/