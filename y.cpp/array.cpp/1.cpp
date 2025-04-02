#include<iostream>
using namespace std;
int printarry(int  arr[],int size ){
    
    
     for (int i=0;i<size;i++)
    {
        cout<<arr[i];

        
       
    }
    cout<<endl; 
   
    

}
int main(){
    int v[10]={};
   
    int ans=printarry(v,10);

    int c[2]={1,2};
    printarry(c,2);
    int arraysize=sizeof(v)/sizeof(int);
    cout<<arraysize;
    char ch[5]={'a','d'};
    //printarrayonly fpr int
    cout<<ch[0];
}
