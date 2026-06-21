#include<iostream>
using namespace std;
int main()
{
    int n;
    int rupees;
    cin>>n;
    cin>>rupees;
    int x;
    switch( n ){
        case 100: if(rupees%n>0){
                x=rupees/n
                cout<<