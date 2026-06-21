#include <iostream>
using namespace std;
int main()
{
   char ch;
    cin>>ch;
    cout<< "enter the value of "<<ch<<endl;
 
     if (ch>= 'a'&& ch <='z'){
        cout<<"lower case";
     }
     else{
        if (ch='A' && ch<='Z'){
        cout<<"upp"; 
        }
        else {
        cout<<"numeric";
        } // we can use multiple loop
     }
    
}