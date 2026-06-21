#include<iostream>
#include<stack>
using namespace std;
bool isvalid(string exp){
    stack <char> s;
    for(int i = 0; i < exp.length();i++){
        char ch =exp[i];
        //for opening
        if(ch == '('||ch == '[' || ch == '{') {
            s.push(ch);
        }
        //for closing
        else{
            if(!s.empty()){
            char top=s.top();
                 if((ch==')' && top=='(') || (ch=='}' && top=='{') || (ch==']' && top=='[')){
                s.pop();
            } 
                 else {
                return false ;
            } 

            }
            else{
                return false ;
            }

    }           
  }
        if(s.empty()){
            return true;
        }
}
int main() {
    string s="{()}";
    cout<<"is expression is valid :"<<isvalid(s)<<endl;
}

