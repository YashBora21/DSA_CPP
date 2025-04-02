#include<iostream>
using namespace std;
void func(int *arr ,int s, int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *left=new int[len1];
    int *right=new int[len2];
    int k=s;
    for(int i=0;i<len1;i++){
        left[i]=arr[k++];
            }
   k=mid+1;
     for(int i=0;i<len2;i++){
        right[i]=arr[k++];
            }

    //merge now
    int index1=0;
    int index2=0;
    //main array index
    k=s;
    while(index1<len1 && index2<len2){
        if(left[index1]<=right[index2]){
             arr[k++]=left[index1++];
        }
        else{
            arr[k++]=right[index2++];
        }
    }
    while (index1<len1){  
          arr[k++]=left[index1++];
    }
  while (index2<len2){
          arr[k++]=right[index2++];

    }
    delete[] left;  // Free allocated memory
    delete[] right; // Free allocated memory
}



void merge(int *arr,int s,int e){
    //base case
    if(s>=e) return;
    //left part
    int mid=(s+e)/2;
    merge(arr,s,mid);
    //right
    merge(arr,mid+1,e);
    func(arr,s,e); 
    
}
int main(){
    int arr[15]={222,44,199,5,5,56,32,11,44,22,33,1,33,66,88};
    int n=15;
    merge(arr,0,n-1);
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//time complexity =o(n log n)