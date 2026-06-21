/*Consider a rat placed at (0, 0) in a square matrix mat of order n* n. 
It has to reach the destination at (n - 1, n - 1).
 Find all possible paths that the rat can take to reach from source to destination. 
 The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). 
 Value 0 at a cell in the matrix represents that it is blocked and rat cannot move
  to it while value 1 at a cell in the matrix represents that rat can be travel through it.
Note: In a path, no cell can be visited more than one time.
 If the source cell is 0, the rat cannot move to any other cell. In case of no path, return an empty list. The driver will output "-1" automatically*/
 #include<iostream>
  #include<vector>
  #include <algorithm>
 using namespace std;
//up movement(x-1,y)
//down(x+1,y)
//left(x,y-1)
//right(x,y+1)
//condition to move (i,j)to (k,l)
//k&l matrixke andar hona chaiye 
//m[k][l]=1
//aur woh unvsited chaiye(after each  move vested array will 1 and after that it will again zero)
//do bactracking

//to check all three condition
bool issafe(vector<vector<int> >m,int n,vector<vector<int>> visited,int newx,int newy){
 if(newx>=0  && newy>=0 && newx<n && newy<n &&  visited[newx][newy] == 0  && m[newx][newy]==1){
    return true;
 }
 else{
    return false;
 }
}
void solve(vector<vector<int> >m,int n,vector<vector<int>> visited,vector<string>& ans,string path,int srcx,int srcy){
    //base 
    if(srcx==n-1 && srcy==n-1){
    ans.push_back(path);
        return;
    }
    //we at 1st positon
    visited[srcx][srcy]=1;
    //down
    int newx=srcx+1;
    int newy=srcy;
    if(issafe(m,n,visited,newx,newy)){
            path.push_back('d');
            solve(m,n,visited,ans,path,newx,newy);
            path.pop_back();
    }
     //left
    newx=srcx;
    newy=srcy-1;
    if(issafe(m,n,visited,newx,newy)){
            path.push_back('l');
            solve(m,n,visited,ans,path,newx,newy);
            path.pop_back();
    }
     //right
    newx=srcx;
    newy=srcy+1;
    if(issafe(m,n,visited,newx,newy)){
            path.push_back('r');
            solve(m,n,visited,ans,path,newx,newy);
            path.pop_back();
    }
 //up
     newx=srcx-1;
     newy=srcy;
    if(issafe(m,n,visited,newx,newy)){
            path.push_back('u');
            solve(m,n,visited,ans,path,newx,newy);
            path.pop_back();
    }
    // Backtrack: unmark the cell as visited
    visited[srcx][srcy] = 0;

}
int main(){
    int n = 3;
    vector<vector<int>> m(n, vector<int>(n));
    vector<vector<int>> visited(n, vector<int>(n, 0));
    for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
         cin>>m[i][j];
        }
    }
    for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
       cout<<m[i][j]<<" ";
        }cout<<endl;
    }
    vector<string> ans;
 //if first postion will be zero
    if(m[0][0]==0){
        return 0;
    }
    int srcx=0;
    int srcy=0;
 //intialy zero
  
    for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
            visited[i][j]=0;
        }
    }
    string path="";
    solve(m,n,visited,ans,path,srcx,srcy);
    //it will be sent in increasing order
    sort(ans.begin(),ans.end());
        for (int i=0;i<ans.size();i++){
            cout<<ans[i]<< endl;
        }
    


}