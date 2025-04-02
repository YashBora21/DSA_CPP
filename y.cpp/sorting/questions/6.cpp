//check given array is sorted and rotated
// it is true when if only one elment is greater than last elment 
#include<iostream>
#include<vector>
using namespace std;
bool resorted(vector<int>& arr){
   int count=0;
   
   for (int i = 1; i < arr.size(); i++)
   {
     if(arr[i-1]>arr[i]){
    count++;}
   }
   if(arr[arr.size()-1]>arr[0]){
    count++;
   }
   return count<=1;//for < this all element are same eg 111 
}


int main() {
    vector<int> v = {1, 3, 6 , 7, 9};
   
   
   int c= resorted(v);
   if(c==1){
    cout<<"given is true"<<endl;
   }
   else{
    cout<<"fales";
   }
    
    return 0;
}