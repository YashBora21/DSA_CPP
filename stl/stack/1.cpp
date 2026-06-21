#include<iostream>
#include<stack>//lifo technique
using namespace std;
int main(){
    stack<string>s;
    s.push("yash");
    s.push("yogesh");
    s.push("bora");
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<"is empty:"s.empty();



}