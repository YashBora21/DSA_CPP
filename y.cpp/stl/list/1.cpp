#include<iostream>
#include<list>//doubley link list it needed travesing to acess elment
using namespace std;
int main(){
    list<int> l;
     list<int> k(5,100);
    l.push_back(1);
    l.push_front(2);
    for(int i: l){
        cout<<i<<" ";

    }cout<<endl;
    l.erase(l.begin());
     for(int i: l){
        cout<<i<<" ";

    }cout<<endl;
    cout<<"size:"<<l.size()<<endl;
     for(int i: k){
        cout<<i<<" ";

    }cout<<endl;
       list<int> j(k);
      for(int i: j){
        cout<<i<<" ";

    }cout<<endl;

}