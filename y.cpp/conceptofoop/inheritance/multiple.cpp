#include<iostream>
using namespace std;
//multiple
class a{
   public:
  string name="ram";
  float height=5.8;
  void display(){
        cout<<"name:"<<name<<"\nheight:"<<height;
    }
};
class b
{
    public:
    int weight=60;
    void s1(){
        cout<<"\nweight:"<<weight<<endl;
    }
   
};
class c:  public a,public b
{

};
int main(){
    c obj;
    obj.display();
    obj.s1(); 
}