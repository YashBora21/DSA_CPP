#include <iostream>
using namespace std;
/*
placed the cows which have largest ditance between them
10 20 30 40
c1 at 10 c2 at 20 d=10
c1 at 10 c2 at 30 d=20
*/
bool ispossible(int arr,int n,int m,int mid)
{
    int cowscount=1;
    int stalldiff=0;
        for (int i = 0; i < n; i++){
           if(arr[i]-stalldif) 
        }


}
int cowsstall(int arr,int n,int m){
    
    int s=0;
    int maxi=-1;
    for (int i = 0; i < n; i++)
    {
       maxi=max(maxi,arr[i]); 
    }
    int e=maxi;
    int   mid= start+(end-start)/2;
     while (start <= end)
    {
        if ( ispossible(arr,n,m,mid) )
        {
           ans = mid;
           s=mid+1;
        }
        else
        {
                e= mid-1; ;
        } 
             mid= start+(end-start)/2;
        
    }
    return ans;
    
}