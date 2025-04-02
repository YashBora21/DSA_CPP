#include<iostream>
using namespace std;
int power(int a,int b){
    //banse
    if(b==0)return 1;
    if (b==1)return a;
    // for odd= a*(a^b/2*a^b/2) for even =a^b/2*a^b/2
    //call
     int ans=power(a,b/2);
    if(b&1){
        return a*ans*ans;    }
else{
    return ans*ans;
}
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans = power(a,b);
    cout<<"ans:"<<ans<<endl;
    }