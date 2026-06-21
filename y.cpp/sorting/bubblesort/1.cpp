#include<iostream>
using namespace std;
int bubble(int arr[],int size){
   for (int i = 0; i < size-1; i++)
   {
        for (int j = 0; j< size-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
           // for this it will be happen for only one size=size-1;
        }
        
   }       
    
}
int display(int arr[],int size){
    for (int k = 0; k <= size-1; k++)
    {
        cout<<arr[k]<<" ";
    }
}
int main(){
    int arr[6]={22,33,11,66,10,9};
    bubble(arr,6);
    display(arr,6);
   
}
/*
complexity
time=O(n^2)
space=O(1)
best case=O(1);
is algorithm is stable or not 
what is inplace sorting 
*/