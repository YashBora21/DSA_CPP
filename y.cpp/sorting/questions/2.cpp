//2 merge sort array of sorted array
#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> arr1,vector <int> arr2,vector<int>& v4){
        int i=0;
        int j=0;
        int k=0;        
         while(i<arr1.size() && j<arr2.size()){
            if(arr1[i]<arr2[j]){

                v4[k++]=arr1[i++];
                
            }
            else{
                v4[k++]=arr2[j++];
                
            }
        }
        //copy first array elment
        while(i<arr1.size() ){
            v4[k++]=arr1[i++];
            
        }
        //copy second array element
         while(j<arr2.size()){
            v4[k++]=arr2[j++];
            
        }
      
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
    vector<int> v3(v1.size() + v2.size()); // Initialize v3 with the correct size
    merge(v1, v2, v3);
    print(v3);
    
    return 0;
}