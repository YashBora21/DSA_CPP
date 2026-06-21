#include <iostream>
using namespace std;
//1prime
//0not prime
bool isprime(int a){
    for(int i=2;i<a;i++)
    if(a%i==0){
       
        return 0;
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
     if (isprime(n)){
        cout <<"prime";

    }
    else{
        cout<<"note prime";
    }
   /*int ans=isprime(n);
   cout<<ans;*/

}