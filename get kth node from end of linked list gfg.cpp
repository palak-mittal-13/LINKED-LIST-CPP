/*

class Solution {
  public:
  
    int length_linked_list(Node* head){
    //cout<<"printing the length of entire linked list:"<<endl;
    int count=0;
    Node* temp=head;
    if(head==NULL){
        //cout<<"list is empty"<<endl;
        return 0;
    }
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
  
        Node* reverseList(Node* head) {
        
        Node* prev=NULL;
        Node* curr=head;
        while(curr!=NULL){
            Node* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        head=prev;
        return head;

    }
  
    int getKthFromLast(Node *head, int k) {
        // Your code here
        if(length_linked_list(head)<k) return -1;
        
        Node* temp=reverseList(head);
        int pos=1;
        while(pos<k){
            temp=temp->next;
            pos++;
        }
        return temp->data;
    }
};

*/