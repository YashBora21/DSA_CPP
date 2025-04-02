#include<iostream>
using namespace std;
bool isorted(int *arr,int size){
    //basse condition
    if(size==0||size==1) return 1;
    //process
    if(*arr>*(arr+1)) return 0;
    else{
        bool remaingpart=isorted(arr+1,size-1);
        return remaingpart;
    }
    
   

}
int main(){
    int arr[5]={1,2,3,4,5};
if(isorted(arr,5)){
    cout<<"arr is sorted"<<endl;

} 
else{
    cout<<"arr is not sorted"<<endl;
}   
}