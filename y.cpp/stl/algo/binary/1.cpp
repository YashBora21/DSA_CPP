#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(4);
    v.push_back(5);
     v.push_back(7);
    cout<< "is element found  at:"<<binary_search(v.begin(),v.end(),4)<<endl;
    cout<<"lower bound:"<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;//index
    cout<<"upper bound:"<<upper_bound(v.begin(),v.end(),5)-v.begin()<<endl;//index
    int a=5,b=6;
    cout<<"max:"<<max(a,b)<<endl;
    string k="abcd";
    reverse(k.begin(),k.end());
    cout<<k<<endl;
     vector<int> d;
    d.push_back(8);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_back(7);
    sort(d.begin(),d.end());///it is based on introsort which male of combinationn of three sort
    //quick sort heapsort insertion sort
    for (int i = 0; i < d.size(); i++)
    {
        cout<<d[i]<<" ";
    }
    
}