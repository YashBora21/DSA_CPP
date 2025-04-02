#include<iostream>
#include<deque>//it do insrtion and deletion from both end
//it is dynamic
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for(int i: d){
        cout<<i<<" ";
    } 
cout<<endl;
//d.pop_back();
 for(int i: d){
        cout<<i<<" ";
    } 
cout<<endl;
//d.pop_front();
 
cout<<d.front()<<endl;
d.erase(d.begin(),d.begin()+1);
for(int i: d){
        cout<<i<<" ";
    } 
cout<<endl;


}