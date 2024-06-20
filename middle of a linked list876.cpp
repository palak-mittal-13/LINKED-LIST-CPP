/*
cases dono ke liye hai jb even and odd length linked list hogi

approach is ki phle length nikalenge linked list ki phir ( len/2 +1 ) tk traverse kr lenge and jo node hogi at that position uske data ko ya us node ko return kr denge

isme even length wali linked list me 2nd wali node ko lenge
agar 1st wali node chahiye then ham check karenge temp->next!=NULL
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
    
    int getLength(ListNode* head){
        ListNode* temp=head;
        int len=0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        return len;
    }
   
    ListNode* middleNode(ListNode* head) {
        int len=getLength(head);
        int position= (len/2 +1);
        int currPosition=1;
        ListNode* temp=head;

        while(currPosition!=position){
            currPosition++;
            temp=temp->next;
        }
        
        return temp;
    }
};

*/