#include<iostream>
#include<vector>
using namespace std;

void subset(vector<string> str, vector<string> output, int index , vector<vector<string>>& ans) {
    // Base case
    if (index >= str.size()) {
        ans.push_back(output);
        return;
    }
    
    // Exclude the current element
    subset(str, output, index + 1, ans);
    
    // Include the current element
    string element = str[index];
    output.push_back(element);
    subset(str, output, index + 1, ans);
    
    // Backtrack to remove the last included element
    output.pop_back(); // This line is added to ensure correct backtracking
}

int main() {
    vector<string> str = {"a", "b", "c"};
    int index = 0;
    vector<string> output;
    vector<vector<string>> ans;
    subset(str, output, index, ans);
    
    // Display the subsets
    for (int i = 0; i < ans.size(); i++) {
        cout << "{ ";
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
