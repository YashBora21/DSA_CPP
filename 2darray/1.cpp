//arr [3][3] first one is row and sec is column
#include <iostream>
using namespace std;
bool isprsent(int arr[3][4],int target){
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++){
           if(arr[i][j] == target){
            return 1;
           }
          
        }
    }return 0;
}
int  main(){
    int arr[3][4];
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
   int item;
   cout<<"enter the number:"<<endl;
   cin>>item;
   if(isprsent(arr,item)){
        cout<<"element found"<<endl;
   }
   else{
    cout<<"element not found"<<endl;
   }
    
}