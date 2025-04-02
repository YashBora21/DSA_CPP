#include <iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4};
    int *p=&arr[0];
    cout<<"add of first memory location:"<< arr <<endl;//its printed address of arr[0]
     cout<<"add of first memory location:"<< p <<endl;
      cout<<"  first memory location:"<<*arr <<endl;
    //it give error cout<<"add of first memory location:"<<*arr[2] <<endl;
         cout<<"  first memory location:"<<*arr+1 <<endl;
         //for traversing we use*(arr+i)
         //formula we use
      //   arr[i]=*(arr+i)or
      //i[arr]=*(i+arr)
      int i=3;
      cout<<i[arr]<<endl;//it same ass print arr[i]
      cout<<sizeof(arr)<<endl;
      cout<<sizeof(p)<<endl;
       cout<<sizeof(&p)<<endl;

       int  arr1[10]={1,2,3,4,5};
       int *ptr=&arr[0];
       cout<<ptr<<endl;
       ptr=ptr+1;
       cout<<ptr<<endl;
       cout<<*ptr<<endl;
       ptr=ptr+1;
       cout<<*ptr;
}