#include <bits/stdc++.h>


template <typename T>

    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

    

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{

LinkedListNode<int>* pre=NULL;
LinkedListNode<int>* curr=head;

while(curr!=NULL){
    LinkedListNode<int>* forward=curr->next;
    curr->next=pre;
    pre=curr;
    curr=forward;
}
return pre;
}

int main(){

}