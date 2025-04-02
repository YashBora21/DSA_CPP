#include<iostream>
using namespace std;
class a{
    public:
    void name(){
        cout<<"name: ram"<<endl;
    }
   /*it can't be overloaded int name(){
        cout<<"name: ram"<<endl;
        return 0;
    }*/
    void name(string name ){
        cout<<"name: "<<name<<endl;

    }
     int name(int name ){
        cout<<"name: "<<name<<endl;

    }

};
int main(){
    a obj;
    obj.name();
    obj.name("shamm");
    obj.name(31);
}