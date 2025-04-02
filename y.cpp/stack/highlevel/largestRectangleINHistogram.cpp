#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> nextsmallerelemnet {
       vector<int> ans(4);
    s.push(-1);
    for(int i=v.size()-1; i>=0; i--){
        int current=v[i];
         while (s.top()!=-1 && arr[s.top()] >= current) {
            s.pop();
        }
     ans[i]=s.top();
        
        s.push(i);
    }
    return ans;
}
vector<int> prevsmallerelemnet {
       vector<int> ans(4);
    s.push(-1);
    for(int i=0; i<v.size(); i++){
        int current=v[i];
         while (s.top()!=-1 && arr[s.top()] >= current) {
            s.pop();
        }
     ans[i]=s.top();
        
        s.push(i);
    }
    return ans;
}
int main(){
    int area=INT_MIN;
    vector<int> height;
    int n= height.size();
     vector<int> next(n);
     next=nextsmallerelemnet(height,n);
      vector<int> prev(n);
      prev=prevsmallerelemnet(height,n);
      for(int i=0;i<n;i++){
        int l=height[i];
        int b=next[i]-prev[i]-1;
        if(next[i]==-1){
            next[i]=n;
        }
        int newarea(l*b);
        area= max(area,newarea);
      }

    
}