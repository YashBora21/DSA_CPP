#include<iostream>
using namespace std;
//multiple
class a{
   public:
  string name="ram";
  float height=5.8;
};
class b:  public a
{
    public:
    int weight=60;
   
};
class c:  public b
{
    public:
    string adress="pune-411009";
    void display(){
        cout<<"name:"<<name<<"\nheight:"<<height<<"\nweight:"<<weight<<"\n"<<"address:"<<adress<<endl;
    }
};
int main(){
    c obj;
    obj.display();
  //  cout<<obj.name;
}