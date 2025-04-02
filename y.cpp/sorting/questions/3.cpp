#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 vector<int> merge(vector<int> arr1,vector <int> arr2){
    int m=arr1.size();
    int n=arr2.size();
     arr1.resize(m + n);
    int j=0;
    int i=m;
    while(j<n){
        arr1[i]=arr2[j];
        i++;
        j++;
    }
    sort(arr1.begin(),arr1.end());
    return arr1;
}
void print( const vector<int>& v4){
    for (int i = 0; i < v4.size(); i++)
    {
        cout<<  v4[i]  <<" ";
    }
    cout<<endl;
    
}

int main() {
    vector<int> v1 = {1, 3, 5, 7, 9};
    vector<int> v2 = {2, 4, 6};
    vector<int> v3(v1.size() + v2.size());
    v3=merge(v1, v2);
    print(v3);
    
    return 0;
}