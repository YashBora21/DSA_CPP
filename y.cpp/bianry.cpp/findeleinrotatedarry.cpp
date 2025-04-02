#include<iostream>
using namespace std;
int pi(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        } mid=(start+end)/2;
    }return end;
}
int sear(int arr[],int s,int e,int item){
    int start=s;
    int end =e;
    int mid=(start+end)/2;
    while(start<end){
        if(arr[mid]==item){
            return mid;
        }
        else if(arr[mid]>item){
            end=mid-1;
        }
        else{
            start=mid+1;
        } mid=(start+end)/2;
    }return end;
}
int main(){
    int arr[5]={7,9,1,2,3};
    int item;
    cout<<"enter the element to search"<<endl;
    cin>>item;
    int pivot=pi(arr,5);

    if(item>=arr[pivot] && item<=arr[4]){
        cout<<"elment found  at index:"<<sear(arr,pivot,4,item);

    }
    else {
    cout<<"elment found at index:"<<sear(arr,0,pivot-1,item);
    }
    


}
