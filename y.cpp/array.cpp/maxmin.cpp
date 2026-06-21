#include<iostream>
#include <limits.h>
using namespace std;

int getmin(int numm[],int a){
    int min = INT_MAX;

    
  for(int i=0;i<a;i++)
   {
    if (numm[i]<min);
    {
        min=numm[i];
    }
   } 
return min;
    
} 
    


int getmax(int num[],int n)

{
    int max= INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(num[i]>max){
           max=num[i];
        }
    }
    return max;//returning max

}
int main()
{
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
   cout<< getmax(arr,size);
   cout<<endl;
    cout<<getmin(arr,size);
    return 0;

}