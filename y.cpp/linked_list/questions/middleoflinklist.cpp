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
int getmid(node* &head ){
    int len=0;
    node* temp=head;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
    return len;
}
node* secondapproach(node* &head){
    if(head==nullptr || head->next==NULL){
        return head;
    }
    if(head->next->next==nullptr){
        return head->next;
    }
    node* fast=head->next;
    node* slow=head;
    while(fast != nullptr && fast->next != nullptr){
        slow =slow->next;
        fast=fast->next->next;
    }
    return slow;

}
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
int print(node* &head,int pos){
    node* temp=head;
    int cnt=1;
    while(cnt!=pos){
        temp=temp->next;
        cnt++;
    }
    return temp->data;
}
int main(){
    node* head= NULL;
    node* current=NULL;
    node* prev=NULL;
    insertathead(head,1);
    insertathead(head,2);
    insertathead(head,3);
    insertathead(head,4);
    insertathead(head,5);
    insertathead(head,6);
      
int ans;
int len=getmid(head);
   if(len%2==0){
    ans=len/2;
   }
   else{
    ans=(len/2)+1;
   }
cout<<"middle of the :"<<print(head,ans)<<endl;
node* temp=secondapproach(head);
cout<<"middle of the :"<<temp->data<<endl;


       
             


}