 #include <iostream>
 

 using namespace std;

 
    class Stack{
        public:
       int size;
       int *arr;
       int top;

        Stack(int size){
            this->size=size;
            arr=new int[size];
            top=-1;

        }


       void Push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }

        
    }


    int peek(){
        if(top>=0&&top<size){
            return arr[top];
        }

    }

    void pop(){
        if(top>=0){
            top--;
        }
    }

    bool isEmpty(){
        if(top!=-1){
            return false;
        }
        else{
            return true;
        }
    }

    };




 int main(){

  Stack s(5);
  s.Push(13);
  cout<<s.peek() <<endl;

  s.pop();

  cout<<s.isEmpty() <<endl;

  cout<< s.peek() <<endl;



    return 0;
 }