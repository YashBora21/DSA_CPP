#include<iostream>
using namespace std;
#include<stack>
#include<vector>
bool knows(vector<vector<int>> &m,int a, int b){
    if(m[a][b]==1){
        return true;
    }
    else{
        return false;
    }
}
int celebrity(vector<vector<int>> &m,int n){
   stack <int>s;
    for(int i=0;i<n;i++){
        s.push(i);
    }
    //step 2
    while(s.size()>1){
        int a=s.top();
        s.pop();
        int b=s.top();
        s.pop();
        if(knows(m,a,b)){
            s.push(b);
        }
        else{
            s.push(a);
        }

    }
    int candidate=s.top();
    //step 3 single ele in stack verify it
    bool rowcheck= false;
    int Zerocount=0;
    for(int i=0; i<n;i++){
        if(m[candidate][i] == 0){
            Zerocount ++;
        }

    }
    if(Zerocount==n){
        rowcheck = true;
    }
     bool colcheck= false;
   int  onecount=0;
    for(int i=0; i<n;i++){
        if(m[i][candidate] == 1){
            onecount ++;
        }

    }
    if(onecount==n-1){
        colcheck = true;
    }
    if(colcheck==true && rowcheck==true){
        return candidate;
    }
    else{
        return -1;
    }
}
int main() {
    vector<vector<int>> m={{1,0,0},{0,0,0},{1,0,0}};
    int n = m.size();
    cout<<"the celbrity candiate is "<<celebrity(m,n)<<endl;
}