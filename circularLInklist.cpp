
#include <iostream>
using namespace std;

class Node{
public:
int data;
Node* next;
Node* prev;

Node(int data){
  this->data=data;
  this->next=NULL;
  this->prev=NULL;
}
~Node(){
  int val=this->data;
  if(this->next!=NULL){
    delete next;
    this->next=NULL;
  }
}
};
bool isCircular(Node* head){
  Node* temp=head->next;
  while(temp!=NULL && temp!=head){
    temp=temp->next;
  }

  if(temp==head){
    return true;
  }
  if(temp==NULL){
    return false;
  }
}