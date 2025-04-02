/// arr ids need sorted
#include<iostream>
using namespace std;
void print(int arr[],int s,int e){
    for(int i=s; i<=e; ++i){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
bool binarysearch(int arr[],int s,int e,int item) {
    print(arr,s,e);
//base
if(s>e)return 0;
//process
int mid=(s+e)/2; 
if(arr[mid]==item){
    return 1;
}
if(arr[mid]>item){
     binarysearch(arr,s,mid-1,item);
}
else{
  
 binarysearch(arr,mid+1,e,item);
}



}
int main(){
    int arr[5]={1,2,3,4,5};
    int s=0;
    int e=5-1;
if(binarysearch(arr,s,e,1)){
    cout<<"item is found"<<endl;

} 
else{
    cout<<"item is not found"<<endl;
}
if(binarysearch(arr,s,e,11)){
    cout<<"item is found"<<endl;

} 
else{
    cout<<"item is not found"<<endl;
}   
   
}