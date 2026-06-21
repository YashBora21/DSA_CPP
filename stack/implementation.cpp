#include<iostream>
using namespace std;
class stack{

public:
int * arr;
int top;
int size;
stack(int size){
    this->size=size;
    arr=new int[size];
    top=-1;
}
void push(int x){
    if(top>=size-1){
        cout<<"the stack is overflow"<<endl;
        return;
    }
    top++;
    arr[top]=x;
}
void pop(){
    if(top==-1){
        cout<<"stack is underflow"<<endl;
        return;
    }
    top --;
    
}
int peek(){
     if(top==-1){
        cout<<"stack is underflow"<<endl;
        return -1;
    }
    else{
    return arr[top];
    }
}
bool isEmpty(){
     if(top==-1){
        cout<<"stack is underflow"<<endl;
        return true ;
    }
    else{
        return 0;
    }
}
};
int main(){
    stack s(3);
    s.push(1);
    s.push(2);
    s.push(3);
 //   s.push(4);
 cout<<"top of the stack:"<<s.peek()<<endl;
 s.pop();
 s.pop();
 s.pop();
cout<<"is stack is empty:"<<s.isEmpty()<<endl;
}