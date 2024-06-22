/*  leetcode 445


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
class Solution {
public:
    ListNode* ReverseLL(ListNode* &head){
        if(head==NULL  ||  head->next==NULL) return head;
        ListNode* prev=NULL;
        ListNode* curr=head;

        while(curr != NULL){
            ListNode* next= curr->next;
            curr->next= prev;
            prev= curr;
            curr=next;
        }
        return prev;
    }
    
    void inserting(ListNode*&head, ListNode*&tail, int digit){
        ListNode* temp=new ListNode(digit);
        if(head==NULL){
            head= temp;
            tail=head;
            return;
        }
        else{
            tail->next=temp;
            tail=tail->next;
        }
    }

    ListNode* Addition(ListNode*first, ListNode*second){
        int carry=0;
        ListNode* head=NULL;
        ListNode* tail=NULL;
        
        //jab tak first and second me se ek bhi null nhi ho jata
        while(first!=NULL && second!=NULL){
            int sum=first->val +second->val +carry;
            carry=sum/10;
            int digit=sum%10;
            inserting(head,tail,digit);
            first=first->next;
            second=second->next;
        }
        // agar second null ho gya ho lekin first me values baki ho
        while(first!=NULL){
            int sum=first->val + carry;
            carry=sum/10;
            int digit=sum%10;
            inserting(head,tail,digit);
            first=first->next;
        }
        // agar second nhi null ho gya ho lekin first me values baki nhi ho
        while(second!=NULL){
            int sum=second->val + carry;
            carry=sum/10;
            int digit=sum%10;
            inserting(head,tail,digit);
            second=second->next;
        }
        //agar dono null ho gye ho lekin carry abhi bachi ho
        while(carry!=0){
            int sum=carry;
            carry=sum/10;
            int digit=sum%10;
            inserting(head,tail,digit);
        }

        return head;

    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=ReverseLL(l1);
        l2=ReverseLL(l2);

        ListNode* ans= Addition(l1,l2);

        ans= ReverseLL(ans);
        return ans;
    }
};


*/