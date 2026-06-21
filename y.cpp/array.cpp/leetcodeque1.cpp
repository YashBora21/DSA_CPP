//swap alternate
#include<iostream>
using namespace std;
swap(int a[],int size){
    for(int i=0;i<size;i=i+2 ){
        if(i+1<size){
            swap(a[i],a[i+1]);
        }



    }

}
void printarr(int a[],int size){
    for(int i=0;i<size;i++){
    cout<<a[i]<< " ";}
    cout<<endl;
}
int main(){
    int even[6]={1,2,3,4,5,6};
    int odd[5]={1,2,3,4,5};
    swap(even,6);
    printarr(even,6);
    swap(odd,5);
    printarr(odd,5);



}
