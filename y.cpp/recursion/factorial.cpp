// function call itself in body of functions then it is called has recursion
#include<iostream>
using namespace std;
int fact(int n){
    //  in recursion base case is mandatory base case in this base case return is manditory
    if (n==0) {
    return 1;}
  /*  int chhoti= fact(n-1);
    int badi=n*chhoti;
    return badi;*/
    // OR
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
     cout<<"ans"<<fact(n);
}
/*
here we male formula 
for factorial divide in two part tahr is choti and badi
n!=n*(n-1)!

*/