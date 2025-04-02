#include<iostream>
using namespace std;


int reverse(int app[],int size){
    int start =0;
    int end =size-1;
    for ( ;start<end;start++,end--){
       
        swap(app[start],app[end]);
        

    }
    
}
void printarr(int at[],int a){
    for(int i=0;i<a;i++){
        cout<<at[i]<< " ";
    }
}
int main(){
    int aeee[6]={1,2,3,4,5,6};
    int cc[5]={1,2,3,4,5};
    reverse (aeee,6);
    reverse (cc,5);
  printarr(aeee,6);
    printarr(cc,5);


    
}