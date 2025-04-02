//alocates the books to student it should be given atleast one book to student
//in continous manner
/*
values pages 10|20|30|40  m=2
case1-10|20 30 40
1=10 2=90 max=90
case2-10 20 |30 40
1=30 2=70 max=70
case3-10 20 30| 40
1=60 2=40 max=60
minimum of max=60
search nbarrier 0 to 10+20+30+40
mid=50
s1=10+20<50
s2=30<50 but 40 remain as 2 student only
therfore solu not less than 50 therefore start = maid+1
if mid =75 we can make solu from above 75 then store ans=75 
and do end=mid-1
*/
#include<iostream>
using namespace std;
bool ispossible(int a[],int k,int r,int mid)
{
    int studentcount=1;
    int pagesum=0;
    for (int i = 0; i <k; i++)
    {
       if(pagesum+a[i]<=mid){
        pagesum = pagesum + a[i];
       } 
       else{
        studentcount++;
        if(studentcount > r || a[i] > mid)
        {
            return 0;
        }
        pagesum = pagesum + a[i];
       }
    }
    return 1;
    
}
int allocate(int ar[],int t,int l)
{
    int start = 0;
    int sum = 0;
    for(int i=0;i<t;i++)
    {
        sum =sum  +ar[i];
    }
    int end =sum;
    int ans = -1;
    int mid = start+(end-start)/2;
    
    while (start <= end)
    {
        if ( ispossible(ar,t,l,mid) )
        {
           ans = mid;
            end = mid-1;
        }
        else
        {
            start=mid+1;
        } 
             mid= start+(end-start)/2;
        
    }
    return ans;
    
}
int main()
{
    int arr[4]={10,20,30,40};
    int m=2;
    int ans=allocate(arr,4,2);
    cout<<ans;
}