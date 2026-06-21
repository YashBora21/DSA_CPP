//a piece of code in a program that is replaced\ by the vlue of macro
#include<iostream>
using namespace std;
#define pi 3.14 //it dosenot take extra storage it cannot be upgradable
#define area(r) (pi*r*r)
int main(){

     int r=5;
    double AREA=area(r);
    cout<<"area of circle is:"<<AREA<<endl;
} 