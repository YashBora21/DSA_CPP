#include <iostream>
#include <vector>
using namespace std;

int prime(int n){
    int count=0;
    vector<bool>prime(n+1,true);
    prime[0]= prime[1]=0;
    for(int i=2;i<n;i++){
        if(prime[i]){
            count++;
           for(int j=i*2;j<n;j=j+i){
            prime[j]=0;
           } 
        }
    }
    return count;
}
int main(){
    int n;
    cout<<"enter the lenght:"<<endl;
    cin>>n;
    cout<<"the total prime numbers arE:"<<prime(n);
}
//complexity time-:o(n+log(log n))