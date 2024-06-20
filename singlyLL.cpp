#include<iostream>
using namespace std;

class Node{
    public:
     int data;
     Node* next;
     // default ctor
     Node(){
        cout<<"I am inside default ctor"<<endl;
        this->next=NULL;
     }
     // ctor
     Node(int data){
        cout<<"I am inside one parameterized ctor"<<endl;
        this->data=data;
        this->next=NULL;
     }

    // dtor
    ~Node(){
     cout<<"destructor called, data value deleted is: "<<this->data<<endl;
    }

};


// function for printing linked list

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
}
else{
Node* temp= new Node();
temp->data=value;
temp->next=head;
head=temp;
}

}


// function for inserting node at ending of linked list
// hame yahan par pass by value nhi balki pass by reference bhejna hai toh isliye & ka use kiya 
void insert_at_end(Node* &head, Node* &tail, int value){
    
// if empty linked list matlab head aur tail dono null
if(head==NULL){
Node* temp= new Node();
temp->data=value;  
head=tail=temp;
}
else{
Node* temp= new Node();
temp->data=value;
tail->next=temp;
temp->next=NULL;
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
    Node* newnode= new Node();
    newnode->data=value;
    Node* temp=head;
    while(position-2>0){
        temp=temp->next;
        position--;
    }
    newnode->next=temp->next;
    temp->next=newnode;

    /*
          //method 2 in else condition
     
    Node* newnode= new Node();
    newnode->data=value;
     Node* prev=NULL;
     Node*curr=head;
     while(position!=1){
        prev=curr;
        curr=curr->next;
        position--;
     }
     prev->next=newnode;
     newnode->next=curr;
    
    */
}

}

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
        delete(temp);
        return;
    }

    else{
 // deletion from any position       
       Node* prev=NULL;
       Node* curr=head;
       while(position!=1){
        prev=curr;
        curr=curr->next;
        position--;
       }
      prev->next=curr->next;
      curr->next=NULL;
      delete (curr);
      curr=prev->next;
    }

}


int main(){


Node* head=NULL;
Node* tail=NULL;

// insert_at_head(head,tail,10);
// insert_at_head(head,tail,20);
// insert_at_head(head,tail,30);
// insert_at_head(head,tail,40);
// cout<<"before deletion\n";
// print_linked_list(head); //40 30 20 10

insert_at_head(head,tail,40);
deletion_of_node(head,tail,1);
cout<<"after deletion\n";
print_linked_list(head);  // 40 30 10

// */


/*

Node* head=NULL;
Node* tail=NULL;

insert_at_head(head,tail,10);
insert_at_head(head,tail,20);
insert_at_head(head,tail,30);
insert_at_head(head,tail,40);
print_linked_list(head); // prints 40 30 20 10

insert_at_end(head,tail,100);
insert_at_end(head,tail,200);
insert_at_end(head,tail,300);
insert_at_end(head,tail,400);
print_linked_list(head); // prints 40 30 20 10 100 200 300 400

insert_at_position(head,tail,10000,3);
print_linked_list(head);


*/

/*

 Node* first=new Node(5);
 Node* second=new Node(15);
 Node* third=new Node(25);
 Node* fourth=new Node(35);
 Node* fifth=new Node(45);

first->next=second;
second->next=third;
third->next=fourth;
fourth->next=fifth;

Node* head= first;
Node* tail= fifth;
print_linked_list(head);

int ans=length_linked_list(head);
cout<<ans<<endl;

insert_at_head(head,tail, 55);
print_linked_list(head);

insert_at_end(head,tail, 65);
print_linked_list(head);

*/

/*

 Node* first=new Node(5);
 Node* second=new Node(15);
 Node* third=new Node(25);
 Node* fourth=new Node(35);
 Node* fifth=new Node(45);

first->next=second;
second->next=third;
third->next=fourth;
fourth->next=fifth;

*/

/*

// statically memory allocation
    Node a;
    Node b(6);

// dynamically memory allocation
    Node* c= new Node();
    Node* d=new Node(5);
    cout<<c->data<<endl; // prints garbage value
    cout<<d->data<<endl;   // prints 5

*/
    return 0;
}