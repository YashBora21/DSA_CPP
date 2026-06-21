#include<iostream>
using namespace std;//inline function is a function which contain of one body line 
 inline int getmax(int& a,int& b){
  return (a>b) ? a:b;
}
int main(){
    int a=1,b=2;
    int ans=0;
    ans=getmax(a,b);
    cout<<"maximum is:"<<ans<<endl;
 //   ans=(a>b) ? a:b;//instead of using if sles we used ternery operator
    a=a+3;
    b-b+1;
    ans=getmax(a,b);
    cout<<"maximum is:"<<ans<<endl;
  //  ans=(a>b) ? a:b;

}