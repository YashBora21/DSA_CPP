//do excluding and including technique
#include<iostream>
#include<vector>
using namespace std;

void powerset( vector<int> s, vector<int> output,int index, vector<vector<int>>& answers){
 //base 
   if(index>=s.size()){
        answers.push_back(output);
        return;
   } 
   //exclude
   powerset(s,output,index+1,answers);
//include
int element=s[index];
output.push_back(element);
powerset(s,output,index+1,answers);

}
int main(){
    vector<int> s={1,2,3};
     vector<vector<int> > answers;
    vector<int> output;
    int index=0;
    powerset(s,output,index,answers);
    // addition for printing 
    for (int i=0;i<answers.size();i++) {
        cout << "{ ";
        for (int j=0;j<answers[i].size();j++) {
            cout << answers[i][j] << " ";
        }
        cout << "}" ;
    }

    return 0;

}