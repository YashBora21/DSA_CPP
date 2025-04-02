//first covert it into linear array find mid thhen do it
#include <iostream>
using namespace std;

bool search(int arr[3][3], int item) {
    int col = 3;
    int start = 0;
    int end = 9 - 1; // Total elements in a 3x3 array is 9
    while (start <= end) {
        int mid = (start + end) / 2; // Calculate mid inside the loop
        int ele = arr[mid / col][mid % col]; //mid divede by col give row and mod give cloumn
        // Access the 2D array correctly
        if (ele == item) {
            return true; // Return true if the element is found
        }
        if (ele < item) {
            start = mid + 1; // Move to the right half
        } else {
            end = mid - 1; // Move to the left half
        }
    }
    return false; // Return false if the element is not found
}

int main() {
    int arr[3][3];
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    
    cout << "Original Array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    int item;
    cout << "Enter the element to search: ";
    cin >> item;
    cout << endl;
    
    if (search(arr, item)) {
        cout << "Element is found" << endl;
    } else {
        cout << "Element is not found" << endl;
    }
}