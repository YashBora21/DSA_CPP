#include<iostream>
using namespace std;
int firstocc(int arr[],int size,int item){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    
    while(start<=end){
        if (arr[mid]==item){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<item){
          start=mid+1;
            
        }
        else if(arr[mid]>item){
           end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;}
int last(int arr[],int size,int item){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        if (arr[mid]==item){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<item){
          start=mid+1;
            
        }
        else if(arr[mid]>item){
           end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    int arr[5]={1,2,3,4,4};
    cout<<"1 occurence"<<firstocc(arr,5,4)<<endl;
     cout<<"last occurence"<<last(arr,5,4)<<endl;
     cout<<"total no. of occurence :"<<last(arr,5,4)-firstocc(arr,5,4)+1<<endl;
}