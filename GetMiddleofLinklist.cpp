#include <iostream>
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};

 
Node* getMiddle(Node* head){
    if(head==NULL||head->next==NULL){
        return head;
    }

    Node* slow=head;
    Node* fast=head->next;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow =slow->next;
    }
    return slow;
}

 int getLength(Node* &head){
     Node* temp=head;
     int count=0;
     while(temp!=NULL){
         temp=temp->next;
         count++;
     }
     return count;

 }


Node *findMiddle(Node *head) {

return  getMiddle(head);


    // Write your code here
    /*
    int ans=getLength(head);
    int len=ans/2;

    Node* temp =head;
    int count=0;
    while(count<len){
        temp=temp->next;
        count++;
    }
    return temp;
    */

}
