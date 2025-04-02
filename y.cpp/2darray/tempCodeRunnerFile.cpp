//row 1<row last ele
#include <iostream>
using namespace std;
bool search(int arr[3][3],int item){
    int col=3;
    int start=0;
    int end=9-1;
    int mid=(start+end)/2;
    while(start<=end){
        int ele=arr[mid/col][mid%col];
        if(ele==item){
            return 1;
        
        }
        if(ele