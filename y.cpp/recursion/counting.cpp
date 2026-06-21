#include<iostream>
using namespace std;
//head recusion
void count(int n){
    if(n==0)return ;
    cout<<n<<endl;
    count(n-1);
}
//tail recursion
void count1(int n){
    if(n==0)return ;
    
    count1(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    
    count(n);
      count1(n);
}