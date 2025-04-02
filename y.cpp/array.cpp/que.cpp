//find duplicte in arry using xor
#include<iostream>
using namespace std;
duplicate(int arr[],int a){
    int ans=0;
       for (int i=0;i<a;i++){
        ans= ans^arr[i];

       }  
        for (int i=1;i<a;i++){
        ans= ans^arr[i];

       }  
       return ans;

}
int main(){
    int arr[5]={1,2,3,4,1};
    int y = duplicate(arr,5);
    cout<<y;
}
