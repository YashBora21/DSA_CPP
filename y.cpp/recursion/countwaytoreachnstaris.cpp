#include<iostream>
using namespace std;
int stairs(int n){
    //base
    //for basements stairs
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    int ans =stairs(n-1)+stairs(n-2);
}
int main(){
    int n ;
    cin>>n;
    cout<<"ways:"<<stairs(n);
}