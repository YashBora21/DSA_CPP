#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max heap
        priority_queue<int>maxi;
         //minheap
        priority_queue<int,vector<int>,greater<int>>min;
maxi.push(0);
maxi.push(1);
maxi.push(2);
maxi.push(3);
int n=maxi.size();
for (int i = 0; i < n; i++)
{
    cout<<maxi.top()<<" ";
    maxi.pop();
}cout<<endl;

min.push(0);
min.push(1);
min.push(2);
min.push(3);
int d=min.size();
for (int i = 0; i < d; i++)
{
    cout<<min.top()<<" ";
    min.pop();
}cout<<endl;


}