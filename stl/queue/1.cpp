#include<iostream>
#include<queue>//fifo technique
using namespace std;
int main(){
    queue<string>s;
    s.push("yash");
    s.push("yogesh");
    s.push("bora");
    cout<<s.front()<<endl;
    s.pop();
    cout<<s.front()<<endl;
    cout<<"is empty:"s.empty();
}