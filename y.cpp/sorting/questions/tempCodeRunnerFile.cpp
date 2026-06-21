#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>& arr1,vector <int> arr2){
    int i=0;
    int j=0;
    bool swapped=0;
     while(i<=arr1.size() && j<=arr2.size()){
            if(arr1[i]>arr2[j]){
                swap(arr1[i],arr2[j]);
                j++;
                if(swapped==1){
                    j--;
                }
               
            
           