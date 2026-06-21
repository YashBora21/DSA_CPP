#include<iostream>
using namespace std;
class hero{
    public:
    //properties
    char name[100];
    int health;
    char level;
  int a;  
  char b;
    hero(int a,char b){
        this->a=a;
        this->b=b;

        cout<<a<<" "<<b<<endl;
    }
    hero(hero &temp){
        cout<<"copy constructor"<<endl;
        this->a=temp.a;
        this->b=temp.b;

        cout<<a<<" "<<b<<endl;
    }

};
int main(){
    //static
  //   hero obj(20);
    //dynamic
 /*   hero *obj1=new hero(30);
   
   obj.health=100;
    cout<<"sixe of:"<<sizeof(obj)<<endl<< obj.health<<endl;
     cout<<"health::"<<(*obj1).health<<endl;
     //0r
      cout<<"health::"<<obj1->health<<endl;*/
      hero obj3(60,'a');
      hero obj4(obj3);

}