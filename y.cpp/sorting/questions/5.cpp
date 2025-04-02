//rotate array by k value
// any num%n=1 tp (n-1)
///eg 43%10=3  cyclic way
#include<iostream>
#include<vector>
using namespace std;
vector<int> resorted(vector<int>& arr,int k){
    vector<int> arr1(arr.size());
    for (int i = 0; i < arr.size(); i++)
    {
      
      arr1[(i+k)%arr.size()]=arr[i];
    }
    
return arr=arr1;
}
void print( const vector<int>& v4){
    for (int i = 0; i < v4.size(); i++)
    {
        cout<<  v4[i]  <<" ";
    }
    cout<<endl;
    
}

int main() {
    vector<int> v = {1, 3, 4, 7, 9};
    int k;
    cout<<"enter the gap:"<<endl;
    cin>>k;
   
    resorted(v,k);
    print(v);
    
    return 0;
}