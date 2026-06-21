#include<iostream>
using namespace std;
//using xor a^a =0
unique(int arr[], int a)
{
    int ans=0;
    for(int i=0;i<a; i++){
        ans=ans^arr[i];

    }
        return ans;

}
int main(){
   int arr[5]={1,2,1,2,3};
    int answer=unique(arr,5);
    cout<<answer;

}

