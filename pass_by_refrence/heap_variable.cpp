//alocation in stack is static and in heap is dynamic
/*
to dynamic array on heap allocation 
*/
#include<iostream>
using namespace std;

int getsum(int *arr,int n)
{
    int sum=0;
    for(int i=0; i<n;i++){
        sum+=arr[i];//arr[i]=*(arr+1)
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=getsum(arr,n);
    cout<<"sum :"<<ans<<endl;
}