#include<iostream>
using namespace std;
//multiple
class a{
   public:
   void details(){
  string name="ram";
  float height=5.8;
          cout<<"name:"<<name<<"\nheight:"<<height<<endl;
   }
};
class b
{
    public:
    void details(){
     string name="jay";
  float height=4.8;
          cout<<"name:"<<name<<"\nheight:"<<height<<endl;
    }
   
};
class c:  public a,public b
{
    public:
    
    void display(){
        cout<<"studying in 6th"<<endl;
    }
};
int main(){
    c obj;
    obj.a::details();
    obj.b::details();
    obj.display();
  //  cout<<obj.name;
}