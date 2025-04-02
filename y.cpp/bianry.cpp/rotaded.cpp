//search in roted sorted array
#include<iostream>
using namespace std;
pivot(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;

        }mid=(start+end)/2;
    }return end;
}
int main(){
    int  arr[5]={7,8,1,2,5};
    cout<<"pivot:"<<pivot(arr,5);
}