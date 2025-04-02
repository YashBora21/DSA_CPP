#include<iostream>
using namespace std;
#include <stack>
int main(){
    stack<int>a;
    a.push(1);
    a.push(20);
    a.push(30);
    cout<<"size of stack :"<<a.size()<<endl;
    a.pop();
    a.pop();
    cout<<"top element:"<<a.top()<<endl;
    cout<<"is empty"<<a.empty()<<endl;
}
