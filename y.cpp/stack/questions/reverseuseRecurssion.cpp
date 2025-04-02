#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int> &s,int x){
    //base 
    if(s.empty()){
        s.push(x);
        return;
    }
    int num =s.top();
    s.pop();
    insertatbottom(s,x);
    s.push(num);
}
void reverse(stack<int> &s){
    //base 
    if(s.empty()){
        return;
    }
    int top=s.top();
    s.pop();
    //recurseive call
    reverse(s);
    insertatbottom(s,top);

}
int main() {
    stack <int> s;
    s.push(4); // Push initial values onto the stack
    s.push(3);
    s.push(2);
    s.push(1);
     cout<<"before reversed stack is :"<<endl;
    stack<int>f=s;
    while(!f.empty()){
    cout<<f.top();
    f.pop();
}
cout<<endl;
    reverse(s);
    cout<<"the reversed stack is :"<<endl;
    stack<int>d=s;
    while(!d.empty()){
    cout<<d.top();
    d.pop();
}
}