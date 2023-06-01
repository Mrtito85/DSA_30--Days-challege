#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }




};
void insertAtHead(Node* Head,int d){
    Node* temp=new Node(d);
    temp->next=Head;
    Head=temp;
}

int main(int argc, char const *argv[])
{
   Node* temp = new Node(10);
   cout<<temp ->data<<endl;
   cout<<temp -> next;
   

    return 0;
}
