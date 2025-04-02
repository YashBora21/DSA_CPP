//zero shifted to right
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 vector<int> zero(vector<int>& arr){
    int i=0;
    for(int j=0;j<arr.size();j++){
       if(arr[j]!=0){
        swap(arr[j],arr[i]);
        i++;

       }
    }
    return arr;
 }
 void print( const vector<int>& v4){
    for (int i = 0; i < v4.size(); i++)
    {
        cout<<  v4[i]  <<" ";
    }
    cout<<endl;
    
}

int main() {
    vector<int> v = {0, 3, 0, 7, 0};
   
    zero(v);
    print(v);
    
    return 0;
}