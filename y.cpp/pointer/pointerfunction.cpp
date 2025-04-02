#include <iostream>
using namespace std;
void print(int *p){
    cout<<*p<<endl;
}
void update(int *p){
   // p=p+1;
  //  cout<<"inside the function :"<<p<<endl;
 //   *p=*p+1;
   //  cout<<*p<<endl;
}
int get_sum(int *arr,int n){
    int count =0;
    cout<<"size"<<sizeof(arr)<<endl;
    for(int i=0;i<n;i++){
        count+=i[arr];
    }
    return count;
}
int main(){
 /*int   value=5;
    int *p=&value;
    print (p);
   cout<<"befor"<<p <<endl;
   update(p);
   // cout<<"after update:"<<p<<endl;//it have same addres to udate use in function it uses main p
 */
    int arr[5]={1,2,3,4,5};
    cout<<"sum:"<<get_sum(arr,5)<<endl;
}