#include <iostream>
using namespace std;

 class stack{

        //properties

        public:
            int size;
            int *arr;
            int top;


        stack(int size){
            this->size=size;
            arr=new int[size];
            top=-1;
        }

        //Behavior

        void push(int element){
            if(size-top>1){
                top++;
                arr[top]=element;
            }
            else{
                cout<<"Stack overflow";
            }

        }


        int peek(){
            if(top>=0){
                return arr[top];
            }
            else{
                cout<<"Stack is empty";
            }

        }


        int pop(){
            if(top>=0){
                top--;
            }
            else{
                cout<<"Stack UnderFlow";
            }

        }


        bool empty(){
            if(top==-1){
                return true;
            }
            else{
                return false;
            }

        }


    };

int main(int argc, char const *argv[])
{
 
   

    return 0;
}
