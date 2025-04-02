//n!/(r!*(n-r)!
#include<iostream>
using namespace std;
int factorial (int n){
    int fact=1;
    for (int i=1;i<=n;i++){
     fact=fact*i;
}
return fact;
}

 int ncr(int n,int r){
    int numerator=factorial(n);
    int denominator= factorial(r)*factorial(n-r);
    int ans= numerator/denominator;
    return ans;


 }
int main(){
 int n,r;
cin>>n>>r;
int answer=ncr(n,r);
cout<<answer;
   
   //cout<<ncr(n,r);
}