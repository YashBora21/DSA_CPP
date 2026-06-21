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
node* removedupli(node* head) {
    if (head == NULL) {
        return head;
    }

    node* current = head;

    while (current != NULL && current->next != NULL) {
        if (current->data == current->next->data) {
            node* todelete = current->next;
            current->next = current->next->next; // Skip the duplicate
            delete todelete; // Free memory
        } else {
            current = current->next; // Move to the next node
        }
    }
    return head;
}
node* removeinunsortedlist(node* head){
    if(head==nullptr){
        return head;

    }
    node* current=head;
    while(current!=nullptr){
        node* temp=current;
        while(temp!=nullptr && temp->next != nullptr){
            if(current->data==temp->next->data ){
                node* store=temp->next;
                temp->next=temp->next->next;
                delete store;

            }
            else{
                temp=temp->next;
            }
        }current=current->next;
    }
    return head;
    }

int main(){
    node* head= NULL;
    node* current=NULL;
    node* prev=NULL;
    insertathead(head,13);
    insertathead(head,13);
    insertathead(head,11);
        insertathead(head,11);
                insertathead(head,11);


    insertathead(head,14);
    cout<<"befor removing:"<<endl;
    print(head);
    cout<<"after removing:"<<endl;
    node* temp=removedupli(head);
    print(temp);
      node* head1= NULL;
    
    insertathead(head1,13);
    insertathead(head1,1);
    insertathead(head1,13);
    insertathead(head1,1);
    insertathead(head1,13);
    insertathead(head1,1);
    insertathead(head1,14);
    insertathead(head1,14);
    cout<<"befor removing:"<<endl;
    print(head1);
    cout<<"after removing:"<<endl;
    node* temp1=removeinunsortedlist(head1);
    print(temp1);
}