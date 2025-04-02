#include<iostream>
using namespace std;
int partition(int *arr,int s,int e){
   int p=arr[s];
   int countlessthanpivot=0;
   for(int i=s+1;i<=e;i++){
    if(p>=arr[i])countlessthanpivot++;
   } //pivot of rihth index
    int pivotindex=s+countlessthanpivot;
     swap(arr[s],arr[pivotindex]);
     //left ansd right paart
     int i=s ,j=e;
     while(i<pivotindex  && j>pivotindex){
        while(arr[i]<=arr[pivotindex]){
            i++;
        }
        while(arr[j]>=arr[pivotindex]){
            j--;
        }
        if(i<pivotindex  && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
     }return pivotindex;
}
void quicksort(int *arr,int s,int e){
    //base case
    if(s>=e) return;
    //partion
   int  p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
    
}
int main(){
    int arr[4]={4, 3, 2, 1};
    int n=4;
    quicksort(arr,0,n-1);
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}