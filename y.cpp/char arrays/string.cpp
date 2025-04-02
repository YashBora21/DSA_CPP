//rverse words excluding spaces
//rverse words excluding spaces
#include<iostream>
#include<string>
using namespace std;

int getLength(char name[]) {
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

bool returnn(char arr) {
    return arr != ' '; // Return true if not a space
}

void reverse(string &arr) {
    string temp = "";
    // Collect non-space characters
    for (int j = 0; j < arr.length(); j++) {
        if (returnn(arr[j])) {
            temp.push_back(arr[j]);
        }
    }
    
    // Reverse the collected characters
    int s = 0;
    int e = temp.length() - 1;
    while (s < e) {
        swap(temp[s++], temp[e--]);
    }
    
    // Replace original string with reversed characters
    int index = 0;
    for (int j = 0; j < arr.length(); j++) {
        if (arr[j] != ' ') {
            arr[j] = temp[index++];
        }
    }
}

int main() {
    string s;
    cout << "Enter the string:" << endl;
    getline(cin, s); // Use getline to allow spaces in input
    reverse(s);
    cout << "Reversed string: " << s << endl; // Output the reversed string
    return 0; // Return 0 to indicate successful execution
}
