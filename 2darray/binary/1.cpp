#include <iostream>
//sorted col
using namespace std;

bool search(int arr[3][3], int item) {
    int row=3;
    int col=3;
    int rowindex=0;
    int colindex=col-1;
    while (rowindex<row&&colindex>=0)
    {
        int elem=arr[rowindex][colindex];
        if(elem==item){
            return 1;
        }
        if(elem<item){
            rowindex++;
        }
        else{
            colindex--;
        }
    }
    return 0;
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