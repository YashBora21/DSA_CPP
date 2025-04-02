#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node ( int data){
        this->data=data;
        this->next=nullptr;
    }
};
class stack{
    public :
    node* top;
    stack(){
       this-> top=nullptr;
    }
    void push(int d){
        node* temp=new node(d);
        if(top==nullptr){
            top=temp;
        }
        else{
            temp->next=top;
            top=temp;
        }

    }
    void pop(){
        if(top==nullptr){
            cout<<"stack is empty"<<endl;
            return;
        }
         node* temp = top;
        top = top->next; // Move top to the next node before deleting
        delete temp; 
    }
    void peek(){
         if(top==nullptr){
            cout<<"stack is empty"<<endl;
            return;
        }
        else{
            cout<<"peek of stack is"<<top->data<<endl;

        }
    }
    bool isEmpty(){
         if(top==nullptr){
            cout<<"stack is empty"<<endl;
            return true;
        }
        else{
            cout<< "false"<<endl;
        }
    }
};
int main(){
    
    stack obj;
    obj.push(10);
    obj.push(20);
    obj.push(40);
    obj.push(50);
    obj.peek();
    obj.pop();
    obj.peek();
    obj.isEmpty();
    obj.pop();
    obj.pop();
    obj.pop();
     obj.isEmpty();
        obj.peek();

}