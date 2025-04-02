#include<iostream>
#include<array>
using namespace std;
int main(){
    int basic[3]={1,3,4};
    array<int,4> a={1,2,3,4};
    int size= a.size();
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

cout<<"element:"<<a.at(2)<<endl;
cout<<"enpty or not:"<<a.empty()<<endl;
cout<<a.front()<<endl;
cout<<a.back();
}