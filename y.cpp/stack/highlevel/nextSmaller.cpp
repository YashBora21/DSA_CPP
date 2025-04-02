#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    stack <int> s;
   vector<int> v={2,1,4,3};
   vector<int> ans(4);
    s.push(-1);
    for(int i=v.size()-1; i>=0; i--){
        int current=v[i];
         while (!s.empty() && s.top() >= current) {
            s.pop();
        }
     ans[i]=s.top();
        
        s.push(current);
    }
   for (int i = 0; i < ans.size(); i++)
   {
    cout<<v[i]<<" ";
   }
   cout<<endl;
   
   
}