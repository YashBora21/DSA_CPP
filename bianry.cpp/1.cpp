#include <iostream>
using namespace std;
int search(int arr[],int size,int item){
    int start=0;
    int end =size-1;
    int mid=(start+end)/2;//or for big arr use mid=(start+(end-start)/2)
    while(start<=end){
        if (arr[mid]==item){
            return mid;
        }
        if(item>arr[mid]){
            start=mid +1;
            
        }
        else{
            end=mid-1;
        }
        mid= (start+end)/2;
    }
    return -1;
}
int main(){
    int even[6]={2,4,6,8,10,12};
    int odd[5]={1,4,5,7,9};
int ans=search(even,6,1);
    if (ans==-1){
        cout<<"element not found"<<endl;
    }
    else{
    cout<<"the element is founnd at index:"<<ans<<endl;
    }

int ans1=search(odd,5,1);
if (ans1==-1){
        cout<<"element not found"<<endl;
    }
    else{
    cout<<"the element is founnd at index:"<<ans1<<endl;}
}