/*
x,n,m
x^n%m
*/
 #include <iostream>
#include <vector>
using namespace std;
int modularexponentiation(int x,int n,int m){
    int res=1;
    while(n>0){
    if(n&1){
        res=((res)*(x)%m)%m;
    }
    x=((x)%m * (x)%m)%m;
    n=n>>1;//2 rigth shift it divde by 2
    }
    return res;
}
int main(){
    int x,m,n;
cout<<"enter x"<<endl;
cin>>x;
cout<<"enter n"<<endl;
cin>>n;
cout<<"enter m"<<endl;
cin>>m;
cout<<"ans:"<<modularexponentiation(x,n,m);
}