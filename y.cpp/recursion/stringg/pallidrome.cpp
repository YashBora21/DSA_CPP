#include<iostream>
using namespace std;
bool pallicheck(string &s,int i,int j){
   //base case
    if(j==0) return false ;
    if(i>=j) return true ;
   if(s[i]==s[j]){
        i++; j--;
        
        return  pallicheck(s,i,j); ;
   }
   else{
    return false ;
   }
 
   
}
int main(){
    string str="aabbbbaa";
    if(pallicheck(str,0,str.length()-1)){
        cout<<"the given string is pallidrome"<<endl;
    }
    else{
        cout<<"the given string is not pallidrome"<<endl;
    }
} 