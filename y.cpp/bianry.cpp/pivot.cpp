#include<iostream>
using namespace std;
int pivot(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid=(start+mid)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start= mid+1;
        }
        else{
            end=mid;
        }mid=(start+end)/2;
    }
    return end;
}
int main(){
    int arr[5]={7,8,1,3,5};
    cout<<"output:"<<pivot(arr,5);
}
