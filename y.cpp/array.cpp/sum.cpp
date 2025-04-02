#include<iostream>
using namespace std;
int sum(int numm[],int a){
     int summ=0;
    for(int i=0;i<a;i++){
       
        summ=summ+numm[i];

    }
    return summ;
}
int main(){
    int arr[5]={1,2,3,-1,5};
   cout<< sum(arr,5);
}