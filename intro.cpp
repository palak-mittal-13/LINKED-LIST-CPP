#include <iostream>
using namespace std;

class Node
{
public:
int data;
Node* next;

Node(){
  cout<<"INSIDE DEFAULT CTOR"<<endl;
}

Node(int data){
  this->data=data;
  this->next=NULL;
  cout<<"INSIDE parameterized CTOR"<<endl;
}

};


void printLinkedList(Node* fir)
{
  Node* temp=fir;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}

int main() {
 

// //static object creation 
// Node b; 
// Node a(5);

// //dynamic object creation
// Node* first= new Node(10);



/*  we can also create a basic linked list 

Node* first= new Node(10);
Node* second= new Node(20);
Node* third= new Node(30);
Node* fourth= new Node(40);

first->next= second;
second->next= third;
third->next= fourth;

printLinkedList(first);

*/


  return 0;
}