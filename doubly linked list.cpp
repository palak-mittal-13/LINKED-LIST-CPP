#include<iostream>
using namespace std;

class Node{
public:
int data;
Node* prev=NULL;
Node* next= NULL;

// default ctor
Node(){
    cout<<"default ctor called\n";
    this->prev=NULL;
    this->next=NULL;
}
// one parameterized ctor
Node(int data){
    this->data=data;
    cout<<"parameterized ctor called\n";
    this->prev=NULL;
    this->next=NULL;
}
//dtor
~Node(){
   cout<<"destructor called, data value deleted is: "<<this->data<<endl;
}
};


// function to print linked list
void print_linked_list(Node* head){
    cout<<"printing the entire linked list:"<<endl;
   if(head==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
    
}

// function for getting length of linked list
int length_linked_list(Node* head){
    cout<<"printing the length of entire linked list:"<<endl;
    int count=0;
    Node* temp=head;
    if(head==NULL){
        cout<<"list is empty"<<endl;
        return 0;
    }
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

// function for inserting node at starting of linked list
// hame yahan par pass by value nhi balki pass by reference bhejna hai toh isliye & ka use kiya 
void insert_at_head(Node* &head, Node* &tail, int value){

// if empty linked list
if(tail==NULL){
Node* temp= new Node();
temp->data=value; 
head=tail=temp; 
return;
}

else{
Node* temp= new Node();
temp->data=value;
temp->prev=NULL;
head->prev=temp;
temp->next=head;
head=temp;
}
}


// function for inserting node at ending of linked list
// hame yahan par pass by value nhi balki pass by reference bhejna hai toh isliye & ka use kiya 
void insert_at_end(Node* &head, Node* &tail, int value){
    
// if empty linked list matlab head aur tail dono null
if(head==NULL){
Node* temp= new Node(value);  
head=tail=temp;
}
else{
Node* temp= new Node(value);
temp->prev=tail;
temp->next=NULL;
tail->next=temp;
tail=temp;
}
}

// function for inserting node at middle of linked list
// hame yahan par pass by value nhi balki pass by reference bhejna hai toh isliye & ka use kiya 
void insert_at_position(Node* &head, Node* &tail, int value,int position){
    
if(position<1){
    cout<<"provided position is not supposed to be but still inserting it at head"<<endl;
    insert_at_head(head,tail,value);
    return;
} 
else if(position==1 || head==NULL|| tail==NULL){
  insert_at_head(head,tail,value);
  return;
}
else if(position==(length_linked_list(head) + 1)){
    insert_at_end(head,tail,value);
    return;
}
else if(position>1+length_linked_list(head)){
    cout<<"you have provided position more than expected so inserting at end"<<endl;
    insert_at_end(head,tail,value);
    return;
}
else{
    Node* newnode= new Node(value);
     Node* previousnode=NULL;
     Node*curr=head;
     while(position!=1){
        previousnode=curr;
        curr=curr->next;
        position--;
     }
     newnode->next=curr;
     newnode->prev=previousnode;
     curr->prev=newnode;
     previousnode->next=newnode;
}

}

// node ka deletion 

void deletion_of_node(Node* &head,Node* &tail,int position){

    if(head==NULL|| tail==NULL){
        cout<<"list is empty.\n";
        return;
    }

    if(head==tail && position==1){
        delete head;
        head=tail=NULL;
    }

    if(position<1 || position>(length_linked_list(head) )){
       cout<<"deletion not possible as not a valid position\n";
       return;
    }

    if(position==1){
        cout<<"deletion from head\n";
        Node* temp=head;
        head=temp->next;
        head->prev=NULL;
        temp->next=NULL;
        delete(temp);
        if((head->next=NULL)){
            tail=head;
        }
        return;
    }

    if(position==(length_linked_list(head) )){
        cout<<"deletion from tail\n";
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        tail=temp;
        temp=temp->next;
        tail->next=NULL;
        temp->prev=NULL;
        delete(temp);
        return;
    }

    else{
 // deletion from any position       
       Node* previousnode=NULL;
       Node* curr=head;
       while(position!=1){
        previousnode=curr;
        curr=curr->next;
        position--;
       }
      previousnode->next=curr->next;
      curr->next->prev=previousnode;
      curr->prev=NULL;
      curr->next=NULL;
      delete (curr);
      curr=previousnode->next;
    }

}






int main(){

Node* head=NULL;
Node* tail=NULL;

/*
Node* head=NULL;
Node* tail=NULL;

insert_at_head(head,tail,10);
insert_at_head(head,tail,20);
insert_at_head(head,tail,30);
insert_at_head(head,tail,40);
print_linked_list(head);  // 40 30 20 10

deletion_of_node(head,tail,3);
print_linked_list(head);  // 40 30 10

*/

/*

Node* head=NULL;
Node* tail=NULL;

insert_at_head(head,tail,10);
insert_at_head(head,tail,20);
insert_at_head(head,tail,30);
insert_at_head(head,tail,40);
print_linked_list(head);

insert_at_position(head,tail,1000,3);
print_linked_list(head);

*/

/*
Node* head=NULL;
Node* tail=NULL;
print_linked_list(head);// prints list is empty

*/

/*
Node* head=new Node(10);
Node* tail=NULL;

print_linked_list(head);// prints 10

*/
    return 0;
}