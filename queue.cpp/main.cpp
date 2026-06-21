#include<iostream> 
using namespace std;
class queue{
public:
int rear,front,capacity;
int *arr;
queue(int d){
rear =-1;
front=-1;
capacity=d;
arr=new int(d);
}~queue(){delete[] arr;}
void enq(int data){
if((rear+1)%capacity==front){
cout<<"size is full"<<endl;
}
else if(front==-1){
front=rear=0;
arr[rear]=data;}
 else if (rear == capacity-1 && front != 0)
    {
        rear = 0;
        arr[rear] = data;
    }
  else
    {
        rear++;
        arr[rear] =data;
    }
}
int dq(){
if ((front==-1)&&(rear==-1)){
cout<<"queue is empty"<<endl;
}
int data = arr[front];
    arr[front] = -1;
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == capacity-1)
        front = 0;
    else
        front++;
 
    return data;
}

void display(){
if (front==1){
cout<<"queue is empty"<<endl;
}
if(rear>=front){
   for (int i = front; i <= rear; i++){
    cout<<arr[i]<<endl;
   } 
}
else
    {
        for (int i = front; i < capacity; i++)
            {cout<< arr[i]<<endl;}
 
        for (int i = 0; i <= rear; i++)
           {cout<< arr[i]<<endl;
           }
    }
  
}
};
int main(){
int size,element,choice;
cout<<"enter the size of queue:"<<endl;
cin>>size;
queue obj(size);
do{
cout<<"choose 1 for enqueue the element"<<endl;
cout<<"choose '2' for dequeue the element"<<endl;
cout<<"choose '3' for display the element"<<endl;
cout<<"choose '4' for exit"<<endl;
cout<<"enter the choice :";
cin>>choice;
switch( choice ){
case 1: cout<<"enter the element:"<<endl;
cin>>element;
obj.enq(element);
break;

case 2:obj.dq();
break;
case 3: cout<<"the elements are:"<<endl;
obj.display();
break;
case 4: cout<<"finish"<<endl;
break;
default: cout<<"invalid choice"<<endl;
}
}
while(choice!=4);
}