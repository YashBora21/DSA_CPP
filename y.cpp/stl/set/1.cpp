#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(7);
    s.insert(8);
    s.insert(3);
    s.insert(4);
    s.insert(5);//it printed only one elment
    s.insert(5);
    for(int i: s){
        cout<<i<<" ";
    }
    cout<<endl;

//use erase to delete
s.erase(s.begin());
cout<<"in present:"<<s.count(-5)<<endl;

}