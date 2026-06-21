#include <iostream>
using namespace std;
int fibonacii(int c)
{
    int a=0;
    int b=1;
    
    cout<<a<<endl<<" "<<b<<endl;
    int temp;
    for(int i;i<=c;i++)
    {
        temp=a+b;
        a=b;
         b=temp;
         cout<<"";
    cout<<endl;
      
        
    } 
     
}
int main(){
    int n;
    cin>>n;
    int answer=fibonacii(n);
    cout<<answer;

}