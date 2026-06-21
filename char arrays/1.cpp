#include<iostream>
#include<string>
using namespace std;
int getlenght(char name[]){
    int count=0;
    for (int i = 0; name[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}
void reverse(char name[],int n){
int s=0;
int e=n-1;
while(s<e){
    swap(name[s++],name[e--]);
}

}
int main(){
    char name[20];
    cout<<"enter thne name:"<<endl;//if you given space then space nothikng will print
    //after it will auto terminate '/0'
    //cin stop execution after space and /t and /n
    cin>>name;
  //  name[2]='\0';//it terminate afte the first null character
    cout<<name;
    int count=getlenght(name);
   cout<<"lenght:"<<count<<endl;
 reverse(name,count);
 cout<<name;

}