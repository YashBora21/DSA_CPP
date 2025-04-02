//addtion of tow array
//carry generate by /10 and value %10
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 vector<int> revverse(vector<int>& arr){
    int s=0;
    int e=arr.size()-1;
    while(s<e){
        swap(arr[s++],arr[e--]);
 }
    return arr;
     }
 vector<int> add(vector<int> arr1,vector<int> arr2){
    int n= arr1.size();
    int m= arr2.size();
    int i=n-1;
    int j=m-1;
    int carry=0;
    vector<int>ans;
    while (i>=0 && j>=0)
    {
       int  sum= arr1[i]+arr2[j]+carry;
       carry=sum/10;
       sum= sum%10;
      ans.push_back(sum);
      i--;
      j--;
    }
    while (i>=0)//1st array is greater
    {
        int sum=arr1[i]+carry;
         carry=sum/10;
        sum= sum%10;
      ans.push_back(sum);
      i--;
    }
     while (j>=0)//2st array is greater
    {
    int sum=arr2[j]+carry;
     carry=sum/10;
    sum= sum%10;
      ans.push_back(sum);
      j--;
    }
      while (carry!=0)//3st carray is left
    {
        int sum=carry;
         carry=sum/10;
        sum= sum%10;
      ans.push_back(sum);
      j--;
    }
    return ans;

 }void print( const vector<int>& v4){
    for (int i = 0; i < v4.size(); i++)
    {
        cout<<  v4[i]  <<" ";
    }
    cout<<endl;
    
}

int main() {
    vector<int> v1 = {1, 3, 5, 7, 6};
     vector<int> v2 = {1, 3, 5, 7};
   
    vector<int> v3( add(v1,v2).size());
   v3 =add(v1,v2);
     revverse(v3);
     print(v3);//or
  // reverse(v3.begin(),v3.end());

  //  print(v3);
  
    
    return 0;
}