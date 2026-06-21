#include<iostream>
using namespace std;
int add(int *arr,int size){
    // base
    if(size== 0) return 0;
      if(size== 1){
        return *arr;
      } 
    //process
  
    return *arr+add(arr+1,size-1);
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"sum of the array is:"<<add(arr,5)<<endl;

}