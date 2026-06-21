#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> &s,int x){
    //base 
    if(s.empty()){
        s.push(x);
        return;
    }
    int num =s.top();
    s.pop();
    solve(s,x);
    s.push(num);
}
int main() {
    stack <int> s;
    s.push(4); // Push initial values onto the stack
    s.push(3);
    s.push(2);
    s.push(1);
    solve(s,5);
    cout<<"the added stack is :"<<endl;
    stack<int>d=s;
    while(!d.empty()){
    cout<<d.top();
    d.pop();
}
}