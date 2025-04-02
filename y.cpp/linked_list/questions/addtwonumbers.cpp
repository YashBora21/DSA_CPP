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
node* reverse(node* head){
    node* curr=head;
    node* prev=nullptr;
    node* forward=nullptr;
    while(curr!=nullptr){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
       
    }
    return prev;
}
void insertattail(node* &head,node* &tail,int d){
        node* temp=new node(d);
        if(head==NULL){
            head=temp;
            tail=temp;
        }
        else{
        tail->next=temp;
        tail=temp;
        }
    
    
}
node* add(node* head1, node* head2){
    int carry=0;
node* anstail=nullptr;
node* anshead=nullptr;
    
/*
    while(head1!=nullptr && head2!=nullptr){
        int sum=carry+head1->data+head2->data  ;
        int digit=sum%10;
        //create a node and answer into a link list
        insertattail(anshead,anstail,digit);
        carry=sum/10;
        head1=head1->next;
        head2=head2->next;
          }
    while(head1 !=nullptr){
       int sum=carry+head1->data ;
       int digit=sum%10;
        //create a node and answer into a link list
        insertattail(anshead,anstail,digit);
         head1=head1->next;

    }
    while(head2!=nullptr){
         int sum=carry+head2->data ;
       int digit=sum%10;
        //create a node and answer into a link list
        insertattail(anshead,anstail,digit);
            head2=head2->next;
    }
    while(carry!=0){
         int sum=carry ;
       int digit=sum%10;
        //create a node and answer into a link list
        insertattail(anshead,anstail,digit);
    }
    return anshead;
*/
while(head1!= nullptr|| head2!= nullptr) {
//value stoe head1 adata
int value1=0;
if(head1!=nullptr){
    value1=head1->data;
}
int value2=0;
if(head2!=nullptr){
    value2=head2->data;
}
   int sum=carry+value1+value2 ;
       int digit=sum%10;
        insertattail(anshead,anstail,digit);
        carry=sum/10;
       if (head1!=nullptr){
        head1=head1->next;
       }
       if(head2!=nullptr){
        head2=head2->next;
       }
}
return anshead;
}

node* sum(node* head1, node* head2){
  // step 1 revserse 
    node* temp1=reverse(head1);
    node* temp2=reverse(head2);
// step2 add
    node* ans=add(temp1,temp2);
//step3
    ans=reverse(ans);
    return ans;
}
int main(){
    node* head1= NULL;
    node* tail1=NULL;
      node* head2= NULL;
    node* tail2=NULL;

    insertattail(head1,tail1,4);
    insertattail(head1,tail1,5);
   
    insertattail(head2,tail2,3);
    insertattail(head2,tail2,4);
    insertattail(head2,tail2,5);
    node* temp= sum(head1,head2);
    print(temp);
    


}