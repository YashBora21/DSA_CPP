#include<iostream>
using namespace std;
int& func(int a){
    int num-a;//they all are local variable 
    int & ans=num;//hey all are local variable
    int & ans=num;//hey all are local variable
    return ans;
}//so there existence only in this block
void update(int n){
    n++;

}
void update1(int &n){
    n++;

}
int main(){
    int i=5;
    cout<<"before update:"<<i<<endl;
    update(i);
    cout<<"after update:"<<i<<endl;//pass by value//it create new memory
     update1(i);
    cout<<"after update1:"<<i<<endl;//pass by reference//it dose not create new memory
}