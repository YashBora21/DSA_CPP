#include<iostream>
#include<vector>
using namespace std;

void solve(string digit, string mapping[],int index,vector<string>& ans, string output){
    //base
    if(index>=digit.length()){
        ans.push_back(output);
        return ;
    }//now we find the number for which we will make string mapping
    //ex. if we have 23 the digit of index is 2
    int number= digit[index]-'0';
    string value=mapping[number];
    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        solve(digit,mapping,index+1,ans,output);
        //phir hatana hai backtracking
        output.pop_back();
    }
    
}
int main(){
    vector<string>ans;
    string output;
    int index=0;
   string digit;
 
cin>>digit;
 string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
 solve(digit,mapping,index,ans,output);
        for (int i=0;i<ans.size();i++) {
        cout << "{ ";
        for (int j=0;j<ans[i].size();j++) {
            cout << ans[i][j] << " ";
        }
        cout << "}" ;
           }
}