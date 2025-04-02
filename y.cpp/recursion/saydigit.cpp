#include<iostream>
using namespace std;
void saydigit(int n, string arr[]){
    //base
    if(n==0){
        return;
    }
    
    int digit =n%10;
    n=n/10;
    saydigit(n,arr);
    cout<<arr[digit]<<" ";
    
}
int main(){
    int n;
    string arr[10]={"zero", "one", "two", "three", "four", "five","six", "seven", "eight","nine"};
    cin>>n;
    cout<<endl<<endl<<endl;
    saydigit(n,arr);
       cout<<endl<<endl<<endl;
}