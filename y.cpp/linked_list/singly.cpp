#include<iostream>
using namespace std;
class node {
    public:
    int data;
    //pointer of node type
    node *next;
    //whenever new node created
    node(int data) {
        this->data=data;
        this->next=NULL;
    }
    //destructor for delete
    ~node(){
        int value= this->data;
        if(this->next !=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free from the node is:"<<value<<endl;
    }
};//use refernce operator to do changes oin orignal one's
void insertathead(node* &head,int d){
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}
void insertattail(node* &tail,int d){
    node* temp=new node(d);
    tail->next=temp;
   tail= temp;
    }
void insertatmiddle(node* &head,node* &tail,int position,int d){
    //for going to n position we have to traverse till n-1
    //for insertion at first positon one
    node* temp=head;
        int cnt=1;
    if(position ==1){
        insertathead(head,d);
        return ;
    }
   //for insertion at end positon one
   if(temp->next==NULL){
    insertattail(head,d);
    return ;
   }
    

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    node* nodetoinsert=new node(d);
    nodetoinsert -> next = temp -> next;
    temp->next=nodetoinsert;
      // Update the tail pointer if the node is inserted at the end
    if (nodetoinsert->next == NULL) {
        tail = nodetoinsert;
    }

}
void printdata(node* &head){
    node* temp=head;
    while(temp != NULL){
         cout<<temp->data<<" ";
         temp=temp->next;
    }
    cout<<endl;
   

}
void deletenode(node* &head,int position)//we can also delete by positon
{
    //deleting first node

    // Case when the node to be deleted is the head
    if (position==1) {
        node* temp = head;
        head = head->next;
        temp->next=NULL;
       
        delete temp;
        return;
    }
else{
    // Case for deleting middle or last node
    node* current = head;
    node* prev = NULL;
    int cnt=1;
    while (cnt<position) {
        prev = current;
        current = current->next;
        cnt++;
    }

    
    prev->next = current->next;
     // Skip the current node
     current->next=NULL;
    delete current; // Delete the node
}
}
int main(){
    node* node1=new node(10);
    cout<<"node data:"<<node1->data<<endl;
    cout<<"node next:"<<node1->next<<endl;
    node* head=node1;
    node* head1=node1;
    node* tail=node1;
    insertathead(head,12);
    insertathead(head,15);
    printdata(head);
    
     insertattail(tail,12);
    insertattail(tail,15);
    printdata(head1);
    insertatmiddle(head1,tail,1,14);
  //  insertatmiddle(head1,tail,5,14);
    printdata(head1);
    cout<<head1->data<<endl;
    cout<<tail->data<<endl;
    deletenode(head1,1);
    printdata(head1);
    deletenode(head1,2);
        printdata(head1);

    
    
}