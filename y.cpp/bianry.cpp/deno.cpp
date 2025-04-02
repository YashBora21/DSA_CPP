#include<iostream>
using namespace std;
int search(int arr[],int size,int item){
int start=0;
    int end =size-1;
    int mid=(start+end)/2;
    int ans=-1;
 while(start<=end){
        if (arr[mid]==item){
            ans=mid;
            end=mid-1;
        }//in this element found mid then fin frist occurence to that serach in left
       else if(item<arr[mid]){
        
            end=mid-1;     
        }
        else if(item>arr[mid]){
            start=mid +1;
        }
         int mid=(start+end)/2;
    }
    return ans;

}
int main(){
    int even[6]={2,4,6,12,12,12};
    int odd[5]={1,4,5,5,9};
int ans=search(odd,5,5);
cout<<"first occurence of 12:";
   
}