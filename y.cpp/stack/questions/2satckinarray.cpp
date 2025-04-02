#include<iostream>
using namespace std;
class stack{

public:
int * arr;
int top1;
int top2;
int size;
stack(int size){
this->size=size;
top1=-1;
top2=size;
arr=new int[size];

}
void push1(int x){
    if(top1-top2>1){
           top1++;
    arr[top1]=x;
    } 
 else{
    cout<<"the stack is overflow"<<endl;
        return;
 }
}
void push2(int x){
    if(top1-top2>1){
           top2--;
    arr[top2]=x;
    }
 else{
    cout<<"the stack is overflow"<<endl;
        return;
 }
}
void pop1(){
    if(top1>=0){
        top1--;
    }
    else{
        cout<<"the stack is under flow"<<endl;
        return ;
    }
}
void pop2(){
    if(top2<size){
        top2++;
    }
    else{
        cout<<"the stack is under flow"<<endl;
        return ;
    }
}
};