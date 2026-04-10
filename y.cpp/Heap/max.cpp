#include<iostream>
#include<queue>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;
    heap(){
        arr[0]=-1;
         size=0;
    }
    
    void insert(int x){
        size=size+1;
        int index=size;
        arr[index]=x;
        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[index],arr[parent]);
                index=parent;

            }
            else{
                return ;

            }
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";

        }
        cout<< endl;
    }
    void deletion(){
        if (size==0) cout<<"heap is empty"<<endl;
        arr[1]=arr[size];
        size--;
        int i=1;
        while(i<size){
            int leftindex=2*i;
            int rightindex=2*i+1;
            if(leftindex<size && arr[leftindex]>arr[i]) {swap(arr[leftindex],arr[i]);i=leftindex;}
            else if(rightindex<size && arr[rightindex]>arr[i]) {swap(arr[rightindex],arr[i]);i=rightindex;}
             
            else break;
        }
    }
};
void heapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<=n && arr[largest]<arr[left]){
        largest=left;
    }
    if(right<=n && arr[largest]<arr[right]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

int main(){
    heap h;
    h.insert(60);
    h.insert(50);
    h.insert(40);
    h.insert(30);
    h.insert(20);
    h.print();
    h.insert(55);
    h.print();
    h.insert(70);
    h.print();
    h.deletion();
    h.deletion();

    h.print();
    int arr[7]={-1,54,80,52,55,60,70};
    int n=6;
    for(int i=6/2;i>0;i--){
        heapify(arr,n,i);   
    }
    for (int i=1;i<=n;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;
    cout<<"priority queue here"<<endl;
    //max heap
    priority_queue<int>pq;
    pq.push(4);
    pq.push(5);
    pq.push(3);
    pq.push(2);
    pq.push(1);
    cout<<"element on top :"<<pq.top()<<endl;
    cout<<"element on size :"<<pq.size()<<endl;
    pq.pop();
    cout<<"Is empty  :"<<pq.empty()<<endl;
    //min heap
    priority_queue<int,vector<int>,greater<int>>minpq;
    minpq.push(4);
    minpq.push(5);
    minpq.push(3);
    minpq.push(2);
    minpq.push(1);
 cout<<"element on top :"<<minpq.top()<<endl;
    cout<<"element on size :"<<minpq.size()<<endl;
    minpq.pop();
    cout<<"Is empty  :"<<minpq.empty()<<endl;
    


}