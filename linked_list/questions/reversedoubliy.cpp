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
node* reverse(node* &head){
    node* first=nullptr;
    node* second=head;
    node* forward=nullptr;
    while(second!=nullptr){
        forward=second->next;
        second->next=first;
        second->prev=forward;
        first=second;
        second=forward;

    }
    head=first;
   return head;
}
node* reverserecurcively(node* &head,node* second,node* first) {
    
    //base
    if(second==NULL){
        head=first;
        return head;
    }
    node* forward=second->next;
    second ->next=first;
    second->prev=forward;
  return  reverserecurcively(head,forward,second);

}
int main(){
   // node* head1=new node(10);
    node* head=NULL;
    node* tail=NULL;
    cout<<endl;
    insertathead(head,tail,11);
    insertathead(head,tail,13);
     insertathead(head,tail,14);
    insertathead(head,tail,15);
    cout<<"befor reverse: "<<endl;
   print(head);
   cout<<"after the reverse: "<<endl;
   node* temp=  reverse(head);
   print(temp);
  cout<<"after the recursivley reverse: "<<endl;
      node* temp1=  reverserecurcively(head,head,nullptr);
   print(temp1);


   
}