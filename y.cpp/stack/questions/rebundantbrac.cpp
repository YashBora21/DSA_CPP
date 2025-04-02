#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isrebundant(string s){
    stack <char>st;
    for(int i=0; i<s.length();i++){
        char ch=s[i];
        if(ch=='('|| ch=='+' || ch=='-' || ch=='/' || ch=='*'){
            st.push(ch);
        }
        else{
            if(ch==')'){
                bool istrue=true;
                while(st.top()!= '('){
                    char top = st.top(); 
                    if(top=='+' || top=='-' || top=='/' || top=='*'){
                        istrue=false;
                    }
                    st.pop();
                }
                if(istrue==true){
                    return true;

                }
                st.pop();
            }
        }
    }
    return false;
}
int main() {

string str ="((a+b))";
cout<<" is rebundatant "<<isrebundant(str)<<endl;

}