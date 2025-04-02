#include<iostream>
using namespace std;
 int squareroot(int item){
    int s=0;
    int e=item;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        int square=mid*mid;
        if(square==item){
            return mid;
        }
        if(square<item){
        ans=mid;
         s =mid +1;
          }
        else{
            e=mid-1;

        }  
         mid=s+(e-s)/2;
    }return ans;
}
double sqr(int item,int precisioncount,int solu){
    double factor=1;
    double ans=solu;
    for(int i=0;i< precisioncount;i++){
        factor=factor/10;//0.1 0.01 0.001
        for(double j=0;j*j<item;j=j+factor){
            ans=j;
        }
    }return ans;
}
int main(){
    
    int ans=squareroot(37);
    cout<<ans;
    cout<<"answer is:"<<sqr(37,3,ans)<<endl;
    

}
