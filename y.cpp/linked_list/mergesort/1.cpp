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
    node* temp=head;
    while(temp != NULL){
         cout<<temp->data<<" ";
         temp=temp->next;
    }
    cout<<endl;
   

}
node* findmid(node* head){
    node*slow=head;
    node*fast=head->next;
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
node* merge(node* left,node *right){
    //left empty
    if(left==nullptr){
        return right;
    }
    if(right==nullptr){
        return left;
    }
    node* ans=new node(-1);
    node* temp=ans;
    while(left!=nullptr&& right!=nullptr){
        if(left->data<right->data){
            temp->next=left;
            temp=left; 
            left=left->next;
        }
        else{
            temp->next=right;
            temp=right;
            right=right->next;
        }
    }
    while(left!=nullptr){
         temp->next=left;
            temp=left; 
            left=left->next;
    }
    while(right!=nullptr){
           temp->next=right;
            temp=right;
            right=right->next;
    }
    return ans->next;

}
node* mergesort(node* head){
    //base case
    if(head==nullptr||head->next==nullptr){
        return head;
    }
   node* mid = findmid(head);
   node * left=head;
   node* right=mid->next; 
   mid->next=nullptr;
   //recursively sort both
    left=mergesort(left);
    right=mergesort(right);
//merge both
    node* result=merge(left,right);
    return result;
}
int main(){
    node* head= NULL;
 
    insertathead(head,4);
    insertathead(head,23);
    insertathead(head,11);
    insertathead(head,9);
    insertathead(head,7);
    insertathead(head,6);
  
    cout<<"before sorting:"<<endl;
    print(head);
    node* temp=mergesort(head);
    cout<<"after sorting:"<<endl;
    print(temp);
}