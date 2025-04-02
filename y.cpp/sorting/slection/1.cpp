#include<iostream>
using namespace std;
int selection(int arr[],int size){
    for (int  i = 0; i < size-1; i++)
    {   int minindex=i;
        for (int j = i+1; j < size; j++)
        {
          if(arr[minindex]>arr[j]){
            minindex=j;
          }
        }
        swap(arr[minindex],arr[i]);
       
    }
    for (int k = 0; k <= size-1; k++)
    {
        cout<<arr[k]<<" ";
    }cout<<endl;
}
int co(int arr[],int size){
    for (int k = 0; k <= size-1; k++)
    {
        cout<<arr[k]<<" ";
    }
}
int main(){
    int arr[5]={22,33,11,66,10};
    selection(arr,5);
    co(arr,5);
   
}
/*
complexity
space: O(1)
time:(n-1)n/2=O(n^2)
best case=O(n^2)
worst case=O(n^2)
use case - for only small size arr,list.
*/