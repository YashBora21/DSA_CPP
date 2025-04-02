#include<iostream>
using namespace std;
bool search(int arr[],int size,int item){
    for(int i=0;i<size;i++)
    {
        if(arr[i]==item){
          return 1;

        }
       

}
return 0;
}
int main(){
    
    int rr[5] = {5,2,3,4,8};
    cout<<"eneter the item"<<endl;
    int item;
    cin>>item;
    bool f= search(rr ,5 ,  item);
    if( f ){
        cout<<"found";

    }
    else{
        cout<<" not found";
    }
    
    return 0;
}


