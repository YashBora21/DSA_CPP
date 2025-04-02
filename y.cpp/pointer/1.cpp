 #include <iostream>
#include <vector>
using namespace std;
int main(){
    int num=5;
    cout<<"adresss of num:"<<&num<<endl;
    int *ptr=&num;
    cout<<ptr<<endl<<"or"<<*ptr<<endl;
    cout<<++*ptr;
       cout<<"size of integer is:"<<sizeof(num)<<endl;
       cout<<"size of pointer is:"<<sizeof(ptr)<<endl;
       //another way to point
        int i=5;
    int *ptr1=0;
   
    ptr1=&i;
    cout<<*ptr1<<endl;
    cout<<ptr1<<endl;
    int a=*ptr1;
    a++;
    cout<<i<<endl;
    (*ptr1)++;
      cout<<i<<endl;
      //copying pointer
      int *q=ptr1;
      cout<<ptr1<<"-"<<q<<endl;
       cout<<*ptr1<<"-"<<*q<<endl;
       //imp
       int*t=&i;
       *t=*t+1;
       cout<<*t;
       cout<<"before:"<<t<<endl;
       t=t+1;
       int j=5;
      // int *nt=&j;
      // (*nt)++;
    int *nt=&j;
    *nt=i;
       cout<<*nt<<j<<endl;
       cout<<"after:"<<t<<endl;


}
//pointer used to store address it have same datatype as it indicating
//*it called as derefrence opreator it indicate value of address
//size of pointer is 8 or 4
 /*
adresss of num:0x61ff08
0x61ff08
or5
6
*/
