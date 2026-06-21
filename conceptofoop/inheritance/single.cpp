#include<iostream>
using namespace std;
//single inhritance 

class a{
 //private memeber  ko inherit nhi kar sakte  private
   public:
  string name="ram";
  float height=5.8;
};
class b:  protected a//or it will public,private
{
    public:
    int weight=60;
    void display(){
        cout<<"name:"<<name<<"\nheight:"<<height<<"\nweight:"<<weight<<"\n";
    }
};
class c{
  //private memeber  ko inherit nhi kar sakte  private:
  protected:
  string name="ram";
  float height=5.8;
};
class d:  protected c//or it will public,private
{
    public:
    int weight=60;
    void display(){
        cout<<"name:"<<name<<"\nheight:"<<height<<"\nweight:"<<weight<<"\n";
    }
};
int main(){
    b obj;
    obj.display();
    d obj1;
    obj1.display();
}