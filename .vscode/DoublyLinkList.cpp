#include <iostream>
using namespace std;

class Node{
public:
int data;
Node* pre;
Node* next;

Node(int d){
  this->data=d;
  this->pre=NULL;
  this->next=NULL;
}
  

};


void InsertAtTail(Node* &tail,int data){
  Node* temp=new Node(data);
  tail->next=temp;
  temp->pre=tail;
  tail=temp;
}

void InsertAtHead(Node* &head,int data){
  Node*  temp=new Node(data);
  temp->next=head;
  head->pre=temp;
  head=temp;
}
int GetLength(Node* &head){
  Node* temp=head;
  int count=0;
  while(temp!=0){
    temp=temp->next;
    count++;
  }
  cout<<endl;
  return count;
  
}
void print(Node* &head){
  Node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}

void InsertAtPosition(Node* &head,Node* &tail,int position,int data){
  if(position==1){
    InsertAtHead(head,data);
    return;
  }

  Node* temp=head;
  int count=1;
  while(count<position-1){
    temp=temp->next;
    count++;
  }

  if(temp->next==NULL){
   
    InsertAtTail(tail,data);
    return;
  }
  Node* NodeToInsert =new Node(data);
  NodeToInsert->next=temp->next;
  temp->next->pre=NodeToInsert;
  temp->next=NodeToInsert;
  NodeToInsert->pre=temp;
}
int main() {
  Node* newNode=new Node(10);
  Node* head=newNode;
  Node* tail=newNode;
  InsertAtHead(head,1);
  InsertAtTail(tail,11);
  InsertAtPosition(head,tail,2,2);
  print(head);
  cout<<GetLength(head);
 
}