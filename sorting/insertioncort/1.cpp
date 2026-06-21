#include<iostream>
using namespace std;
int insert(int arr[],int size){
    int compare;
    int i=1;
   while(i<size)
    {
        compare=arr[i];
        int j=i-1;
       while(j>=0){
    if(arr[j]>compare){
//shift   int j=i-1;
             arr[j+1]= arr[j];
            j--;
        }
       
       else{
            break; 
       }
     
    }  arr[j+1]=compare;//here j=j-1+1=j
    i++;
}
}
    void insetdisplay(int arr[],int size){
    for (int k = 0; k <= size-1; k++)
    {
        cout<<arr[k]<<" ";
    }
}

int main(){
    int arr[5]={22,33,11,66,10};
    insert(arr,5);
    insetdisplay(arr,5);
   
}
/*
it is an  adaptable 
and stable
complexity
time:-O(n^2)==worst
best:-O(n)
space:-O(1)
*/    
