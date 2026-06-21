//peak of mountain array
#include <iostream>
using namespace std;
peak(int arr[],int size){
   int  start=0;
    int end=size-1;
    int mid= (start+end)/2;
   while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else {
            end=mid;
        }mid=start+mid/2;
    }return mid;
}
int main(){
    int even[6]={2,4,6,8,7,6};
    int anss=peak(even,6);
    cout<<anss;}