#include<iostream>
using namespace std;
class st{
    public:
    int a;
    int b;
    int add(){
     return a+b;

    }
    void operator+ (st &obj)//copy
    {
        int value1=this->a;
        int value2=obj.a;
        cout<<"sub:"<<value2-value1<<endl;

    }
    void operator () () {
        cout<<"bracket opertaor overloaded"<<endl;
    }
};
int main(){
  st obj1 , obj2;
   obj1.a=4;
   obj2.a=7;
   obj1 + obj2;
   obj1();
}