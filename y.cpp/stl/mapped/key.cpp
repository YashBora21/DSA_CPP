#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="yash";
    m[5]="yogesh";
    m[3]="bora";
    m.insert({7,"hi"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;//we can use count 
}