#include<iostream>
using namespace std;
#include<stack>
#include<vector>
class nstack{
    public:
    int* arr;
    int* top;
    int* next;
    int n,s;
    int freespot;
    nstack(int n , int s){
        arr=new int[s];
        top=new int[n];
        next=new int[s];
        for(int i=0;i<n;i++){
            top[i]=-1;
        }
        for(int i=0;i<s;i++){
            next[i]=i+1;
        }
        //for last of next
        next[s-1]=-1;
        freespot=0;
    }
    bool push(int m,int x){
        //check for overflow
        if(freespot==-1){
            return false;
        }
        //find index
        int index=freespot;
        //update freespot
        freespot=next[index];
        //insert
        arr[index]=x;
        //update next
        next[index]=top[m-1];
        //update top
        top[m-1]=index;

    }
    int pop(int m,int x){
        //check for underflow
        if(top[m-1]==-1){
            return -1;
        }
        //reverse pop
        int index=top[m-1];
        top[m-1]=next[index];
        next[index]=freespot;
        freespot=index;
        return arr[index];

    }
}