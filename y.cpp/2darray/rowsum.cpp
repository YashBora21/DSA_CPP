#include <iostream>
using namespace std;
void printsum(int arr[3][4]){
  
      for (int i = 0; i < 3; i++)
    {  int sum =0;
        for(int j = 0; j < 4; j++){
            sum=sum+arr[i][j];
        }
        cout<<"sum of row:"<<i<<":"<<sum<<endl;
    }
}
int largerowsum(int arr[3][4]){
    int maxi= INT_MIN;
    int rownum=-1;
     for (int i = 0; i < 3; i++)
    {  int sum =0;
        for(int j = 0; j < 4; j++){
            sum=sum+arr[i][j];
        }
       if(sum>maxi){
        maxi=sum;
       rownum=i;
       }
    }return rownum;
}
int  main(){
    int arr[3][4];
    cout<<"enter the elements"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++){
            cin>>arr[i][j];
        }
    }
 for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++){
          cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    printsum(arr);
    largerowsum(arr);
}