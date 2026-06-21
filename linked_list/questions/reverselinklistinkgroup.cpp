#include <iostream>
using namespace std;
class node{
    public:
    int data; 
    node* next;
    node (int data){
        this->data=data;
        this->next=NULL;

    }
};
void insertathead(node* &head,int d){
     node* temp=new node(d);
    if(head==NULL){
        head=temp;
    }
    else{
   
    temp->next=head;
    head=temp;
    }
}
void print(node* &head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
node* reverseINK(node* & head,int k){
    //base 
    if(head==nullptr || head->next == nullptr){
        return head;
    }
  //  step1 for first k
  node* current=head;
  node* prev=nullptr;
  int count=0;
  node * forward=nullptr;
  while(current!=nullptr&&count<k){
    forward=current->next;
    current->next=prev;
    prev=current;
    current=forward;
    count++;
  }
  //step2 recursion
  if(forward!=nullptr){
    head->next=reverseINK(forward,k);
  }
  //step3 
  return prev;



}
int main(){
    node* head= NULL;
        insertathead(head,1);
    insertathead(head,3);
    insertathead(head,7);
    insertathead(head,11);
    insertathead(head,17);
    insertathead(head,2);
    cout<<"befor reverse :"<<endl;
    print(head);
    cout<<"after reverse :"<<endl;
    node* temp= reverseINK(head,5);
    print(temp);
    
    
    }