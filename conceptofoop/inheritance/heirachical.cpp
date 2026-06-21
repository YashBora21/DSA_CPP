#include<iostream>
using namespace std;
//herichical
class a{
   public:
  string name;
  float height;
};
class b:  public a
{
    public:
    b(){
   name="ram";
 height=5.7;
    }
     void display(){
        cout<<"name:"<<this->name<<"\nheight:"<<this->height<<endl;
    
    }
   
};
class d{
    public:
    int weight=40;
    
    
};
class c:  public a,public d
{
    public:
    c(){
  name="ajay";
    height=4.7;
    }
     void display(){
        cout<<"name:"<<this->name<<"\nheight:"<<this->height<<"\nweight:"<<weight<<endl;
    }
    
   
};
int main(){
    b obj;
    obj.display();
    c obj1;
    obj1.display();
     
}