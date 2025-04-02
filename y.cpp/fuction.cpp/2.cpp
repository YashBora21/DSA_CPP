#include<iostream>
using namespace std;
// gives 1 in case of even 
// gives 0 in case of odd
bool iseven(int a){
    //odd
    if(a&1){
        return 0;


    }
    else{
        return 1;
    }
}
    int main()
    {
        int num;
        cin>>num;
       /* if (iseven(num)){
            cout<<"even";
        }
        else{
            cout<<"odd";*/
        int answer= iseven(num);
        cout<<answer;
        }


