#include<iostream>
using namespace std;
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
int main(){
     a obj;
    obj.details();
    
    b obj1;
    obj1.details();

}