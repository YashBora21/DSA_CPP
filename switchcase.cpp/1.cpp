#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    char operator;
    cin>>a;
    cin>>b;
    cin>>operator;

    switch(operator)//it take only int and charchter
    {
        case '+': cout<<a+b<<endl;
            break;
        case '/': cout<<a/b<<endl;
           break;
        case '*': cout<<a*b<<endl;
        break;
        case '-':cout<<a-b;
         
         break;
  }
  cout<<endl;
}