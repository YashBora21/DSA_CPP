#include<iostream>
using namespace std;
bool search(int *arr,int size,int item) {
//base
if (size == 0) return 0; 
//process
if(*arr==item){
    return 1;
}
if(search(arr+1,size-1,item)){
    return 1;

}
else{
    return 0;
}

}
int main(){
    int arr[5]={1,2,3,4,5};
if(search(arr,5,7)){
    cout<<"item is found"<<endl;

} 
else{
    cout<<"item is not found"<<endl;
}   
}