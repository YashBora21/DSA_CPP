#include <iostream>
using namespace std;
void  waveprint(int arr[3][3]){
  
      for (int col = 0; col < 4; col++)
    { 
        if(col&1){
            //odd index bottom to top
            for(int row=2; row>=0;row--){
                cout<<arr[row][col]<<" ";
            }
        }
        
        else{
            for(int row=0; row<3;row++){
                cout<<arr[row][col]<<" ";
            }
        }
       
    }
    cout<<endl;
}
    void spiral (int arr[3][3])
    {
   // int arr1[3];
    int row=3;
    int col=4;
    int count=0;
    int total=row*col;
    int startingrow=0;
    int startingcol=0;
    int endingrow=row-1;
    int endingcol=col-1;
   while (count < total) {
        // Starting row
        for (int i = startingcol; i <= endingcol; i++) {
            cout << arr[startingrow][i] << " "; // Corrected indexing
            count++;
        }
        startingrow++;

        // Ending column
        for (int i = startingrow; i <= endingrow; i++) {
            cout << arr[i][endingcol] << " "; // Corrected indexing
            count++;
        }
        endingcol--;

        // Ending row
        if (startingrow <= endingrow) { // Check to avoid invalid access
            for (int i = endingcol; i >= startingcol; i--) {
                cout << arr[endingrow][i] << " "; // Corrected indexing
                count++;
            }
            endingrow--;
        }

        // Starting column
        if (startingcol <= endingcol) { // Check to avoid invalid access
            for (int i = endingrow; i >= startingrow; i--) {
                cout << arr[i][startingcol] << " "; // Corrected indexing
                count++;
            }
            startingcol++;
        }
    }
    cout<<endl;
}
void nintydegreerotate(int arr[3][3]){
    for (int startingcol = 0; startingcol <3; startingcol++)
    {
       for(int endrow=2;endrow>=0;endrow--){
        cout<<arr[endrow][startingcol]<<" ";
       }
       cout<<endl;
      
    }
    
}
int  main(){
    int arr[3][3];
    cout<<"enter the elements"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++){
            cin>>arr[i][j];
        }
    }
  cout << "Original Array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Wave Print:" << endl;
    waveprint(arr);
    cout << endl;
     cout << "spiral Print:" << endl;
    spiral(arr);
      cout << "90 degree rotate:" << endl;
      nintydegreerotate(arr);
}