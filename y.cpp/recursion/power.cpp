#include<iostream>
using namespace std;//formula n^m=n*(n)^m-1;
int power(int n, int m){
    if(m==0)return 1;
    return n*power(n,m-1);
}
int main(){
    int n;
    int m;
    cout<<"eneter the num:"<<endl;
    cin >> n;
        cout<<"eneter the power:"<<endl;
    cin>>m;
    cout<<"ans:"<<power(n,m)<<endl;


}