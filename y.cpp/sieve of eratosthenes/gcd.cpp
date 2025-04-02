//gcd=gcd(a-b,b)
//gcd=(a%b,b)while a and b!0

/*gcd=(72,24)
=gcd=(48,24)
=gcd=(24,24)
gcd=(0,24)
gcd=24ofgcd=(72,24)
*/
#include <iostream>
#include <vector>
using namespace std;
int gcd(int a, int b){
    if(a==0) return b;
    if(b==0) return a;
 while (a!=b)
    {
        if(a>b){
        a=a-b;
    }
    if(b>a){
        b=b-a;
    }
    }
    
  
   
}
int main(){
    int a,b;
    cout<<"enter the two numbers to finfd gcd:"<<endl;
    cin>>a;
    cin>>b;
    cout<<"gcd"<<"("<<a<<","<<b<<"):"<<gcd(a,b);
}