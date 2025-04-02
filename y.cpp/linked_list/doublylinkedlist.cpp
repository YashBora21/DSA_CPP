#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next ;
    node* prev ;
    node(int data){
        this->data=data;
       this-> next=NULL;
      this->  prev=NULL;

    }
      ~node(){
        int value= this->data;
        if(this->next !=NULL){
            delete next;
            this->next=NULL;
            this->prev=NULL;
        }
        cout<<"memory is free from the node is:"<<value<<endl;
    }
};
void print(node* head){
    node * temp=head;
    while(temp!=NULL){
        cout<<" "<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertathead(node* &head,node* &tail,int d){
   //empty list
               node* temp=new node(d);
     if(head==NULL){
        head=temp;
        tail=temp;
    }
    else
    {
         temp->next=head;
    head->prev=temp;
    head=temp;
        /* code */
    }
    
   
}
void insertattail(node* &head,node* &tail,int d){
                 node* temp=new node(d);

     if (tail == NULL) { 
             head=temp;
        tail = temp;
    } 
   
   else{
     tail->next=temp;
    temp->prev=tail;
    tail=temp;
   }
}
void insertatanypos(node* &head,node* &tail,int position,int d){
 
        int cnt=1;
    if(position ==1){
        insertathead(head,tail ,d);
        return ;
    }
     node* temp=head;
   //for insertion at end positon one
   if(temp->next==NULL){
    insertattail(head,tail,d);
    return ;
   }
    

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    node* nodetoinsert=new node(d);
    nodetoinsert -> next = temp -> next;
    temp->next->prev = nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev = temp;

      // Update the tail pointer if the node is inserted at the end
    if (nodetoinsert->next == NULL) {
        tail = nodetoinsert;
    }

}
void deletenode(node* &head,int position)//we can also delete by positon
{
    //deleting first node

    // Case when the node to be deleted is the head
    if (position==1) {
        node* temp = head;
        temp->next->prev=NULL;
        head = temp->next;
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

    current->prev=NULL;
    prev->next = current->next;
     // Skip the current node
     current->next=NULL;
    delete current; // Delete the node
}
}
int getlength(node* head){
      node * temp=head;
      int len=0;
    while(temp!=NULL){
        
        temp=temp->next;
        len++;
    }
    cout<<endl;
    return len;
}
int main(){
   // node* head1=new node(10);
    node* head=NULL;
    node* tail=NULL;

    print(head);
    cout<<"the lenght:"<<getlength(head)<<endl;
    cout<<endl;
    insertathead(head,tail,11);
    insertathead(head,tail,13);
   print(head);
  //  cout<<"head now:"<<head->data<<endl;
    // node* head2=head1;
    insertattail(head,tail,10);
    insertattail(head,tail,20);
    print(head);
 //   cout<<"head now:"<<tail->data<<endl;
 insertatanypos(head,tail,1,30);
 insertatanypos(head,tail,5,40);
     print(head);
      cout<<"head now:"<<head->data<<endl;
         cout<<"tail now:"<<tail->data<<endl;
         deletenode(head,1);
         print(head);
         deletenode(head,4);
          print(head);



}