#include<iostream>
using namespace std;


int main(){

    int m;
    
    cin>>m;//row
    int n;//cpolumn
   cin>>n;
    int **arr = new int*[m];//2d array reprsentation using pointer
   
    for(int k=0;k<m;k++){
        arr[k]= new int[n];
    }//creation done 
    for(int row=0;row<m;row++){
        for(int col=0;col<n;col++){
            cin>>arr[row][col];
        }
    }
        for(int row=0;row<m;row++){
        for(int col=0;col<n;col++){
            cout<<arr[row][col]<<" ";
        }cout<<endl;
    }
   
     for(int k=0;k<m;k++){
         delete []arr[k];
    }//relase memory
    delete []arr;

}