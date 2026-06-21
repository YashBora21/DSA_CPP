//if exact and reverse is same then it pailldrome
#include<iostream>
#include<string>
using namespace std;
bool vaild(char ch){
    if(ch>= 'a' && ch>='z'||ch>= 'A' && ch>='Z'||ch>= '0' && ch>='9'){
        return 1;
    }
    else{
        return 0;
    }
}
bool pali(string s){
 // int i=0;
  string temp="";
  for (int j= 0; j < s.length(); j++){
        if(vaild(s[j])==1){
            temp.push_back(s[j]);
        }
      for (int j= 0; j < s.length(); j++){
    temp[j]=tolower(temp[j]);
}
return 1;
  }
}
int getlenght(char name[]){
    int count=0;
    for (int i = 0; name[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}
/*void reverse(char name[],int n){
int s=0;
int e=n-1;
while(s<e){
    swap(name[s++],name[e--]);
}

}*/
//for not case sensitive(pper or lower case)
char tolowercase(char ch){
    
    
    if(ch>'a' && ch<'z'||ch>= '0' && ch>='9'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool pailldrome(char name[],int n){
    int s=0;
int e=n-1;
while(s<=e){
    if(tolower(name[s++])==tolower(name[e--])){
        return 1;
    }
    else{
        return 0;
    }
}
}
int main(){
    
char name[20];

cout<<"enter :";
cin>>name;
cout<<endl;
int size=getlenght(name);
//int ele=reverse(name,size);
int check=pailldrome(name,size);
if(check==1){
    cout<<"it pallidrome"<<endl;

}
else{
    cout<<"it noot a pallidrome"<<endl;
}
//cout<<"charachter to lower case:"<< char(tolower('C'));
string s;
cout<<"enter the string:";
cin>>s;
cout<<"ans:"<<pali(s);
}