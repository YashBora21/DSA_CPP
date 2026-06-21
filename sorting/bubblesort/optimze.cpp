#include<iostream>
using namespace std;
int buubble(int arr[],int size){
   
   for (int i = 0; i < size-1; i++)
   { bool swapped=false;
        for (int j = 0; j< size-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped= true;
            }
           
           // for this it will be happen for only one size=size-1;
        }
         if(swapped== false){
                break;
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
    buubble(arr,6);
    display(arr,6);
   
}