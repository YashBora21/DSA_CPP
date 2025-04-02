#include <iostream>
using namespace std;
int main(){
    char ch[6]="abcde";
    cout<<ch<<endl;
    //seeit works different in case of char array
    char *p=&ch[0];//both print entire string 
    cout<<p<<endl; 
       cout<<&p<<endl; 
       char temp='a';
       char *p1=&temp;
       cout<<p1<<endl;
}