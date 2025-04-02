#include <iostream>
#include<stack>
using namespace std;

void solve(stack<char> &s,int count , int size){
    //base case for
     if(count==size/2){
        s.pop();
        return;
     }
     int num=s.top();
     s.pop();
     //recursion
     solve(s,count+1,size);
     s.push(num);
}

int main(){
    string str="yash";
    stack <char> s;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        s.push(ch);
    }
int size = s.size();
int count=0;
solve(s,count,size);
cout<<"the after deleting mid string is:"<<endl;
stack<char>d=s;
while(!d.empty()){
    cout<<d.top();
    d.pop();
}
cout<<endl;
string ans="";
while(!s.empty()){
    char ch =s.top();
    ans.push_back(ch);
    s.pop();
}
cout<<"reverse is:"<<ans<<endl;
}