#include<iostream>
using namespace std;
int fibo(int n){

    //base case 
    if(n==0){return 0 ; 
    }
   if(n==1){return 1 ;}
    //process
    cout<<"the  series is "<<c<<endl;
   int ans=fibo(n-1)+fibo(n-2);
    return ans;
}
int main(){
    int n;
    cout<<"enter the series till you want:"<<endl;
    cin>>n;
 //   cout<<"the no.you want"<<endl;
  //  int m;
  //  cin>>m;
 // fibo(n);

   cout<<"ans" <<fibo(n)<<endl;
}
