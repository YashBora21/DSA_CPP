#include <iostream>
using namespace std;
void update(int **p){
  //   p=p+1;//dosent chnage
   //  *p=*p+1;//change in ptr by 4byte
   **p=**p+1;//it increses i 
}
int main(){
     int i=5;
     int *ptr=&i;
     int **ptr2=&ptr;
     cout<<*ptr<<"->"<<**ptr2<<endl;
     cout<<ptr<<"->"<<ptr2<<endl;
     cout<<&ptr<<"->"<<ptr2<<endl;
     cout<<*ptr2<<"<-"<<ptr<<endl;
     cout<<i<<"<-"<<*ptr<<"<-"<<**ptr2<<endl;
     cout<<"before"<<i<<"<-"<<ptr<<"<-"<<ptr2<<endl;
     update(ptr2);
          cout<<"after"<<i<<"<-"<<ptr<<"<-"<<ptr2<<endl;


}