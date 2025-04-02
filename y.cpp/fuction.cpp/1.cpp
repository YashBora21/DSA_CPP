#include<iostream>//a^b power code
using namespace std;
int power( ){//fuction defination
   int a,b;
   cin>>a>>b;
    int ans=1;
    for (int i=1; i<=b;i++){
        ans=ans * a;
    }
    return ans;
}
int main()
{
    /*int a , b;
    cin>>a>>b;
  int answer= power(a,b);//function caliing
  cout<<answer;
    return 0;*/
    int answer=power();//fuction calling
    cout<<answer;
}