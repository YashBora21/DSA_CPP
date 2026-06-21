//do excluding and including technique
#include<iostream>
#include<vector>
using namespace std;
void subset( vector<string> str,vector<string>output,int index,vector<vector<string>>& ans){
//base
if(index>=str.size()){
    ans.push_back(output);
    return;
}
//exlcude
subset(str,output,index+1,ans);
//included 
string element=str[index];
output.push_back(element);
subset(str,output,index+1,ans);


}
int main(){
    vector<string>  str={"a", "b", "c"};
    int index=0;
    vector<string> output;
    vector<vector<string>> ans;
    subset(str,output,index,ans);
       for (int i=0;i<ans.size();i++) {
        cout << "{ ";
        for (int j=0;j<ans[i].size();j++) {
            cout << ans[i][j] << " ";
        }
        cout << "}" ;
    }

    return 0;

}