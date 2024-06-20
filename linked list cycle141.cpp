// in this question we have to check whether there is cycle present or not
/*

approach1: using map
           // 1approach is if the address repeats then there is a loop in linkedlist. map is used if true repeats for same address which we have marked while visiting to that node then we say that there is a loop.



*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*

//approach1


class Solution {
public:
    bool hasCycle(ListNode *head) {

        map<ListNode*, bool>table;
        ListNode *temp=head;

        while(temp!=NULL){
            if(table[temp]==false){
                table[temp]=true;
            }
            else{
                return true;
            }
           temp=temp->next;
        }

     // loop not present
      return false;
    }
};
*/