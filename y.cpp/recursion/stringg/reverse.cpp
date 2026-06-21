#include<iostream>
using namespace std;
void revers(string &s,int i,int j){
   //base case
   // if(j==0) return ;
    if(i>j) return ;
   swap(s[i],s[j]);
   i++; j--;
    revers(s,i,j);
   
}
int main(){
    string s="yash";
   revers(s,0,s.length()-1);
    cout<<"reverse:"<<s<<endl;
}