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
    void insertnode(node* &tail,int compele,int d){
        //for no node
        if(tail==NULL){
                    node* temp=new node(d);

            tail=temp;
            temp->next=temp;

        }
        //for one node
        else{
            node* current=tail;
            while(current->data !=compele){
                current=current->next;
            }
             node* temp=new node(d);
   
            temp->next=current->next;
            current->next=temp;
        }
 
    }

bool iscircular(node* head){
if(head==NULL){
    return 1;
}
 
 node* temp = head->next;
 while(temp!=nullptr && temp!=head){
    temp=temp->next;
 }
 if(temp==head){
    return 1;

 }
 else{
    return 0;
 }
}
int main(){
       node* head= NULL;
node* temp=nullptr;
    node* tail=NULL;
        insertathead(head,3);
    insertathead(head,7);
    insertathead(head,11);
    insertnode(tail,4,3);
 insertnode(tail,3,5);
    insertnode(tail,5,6);
   insertnode(tail,5,4);
    cout<<"is circular: "<<iscircular(tail)<<endl;
     cout<<"is circular: "<<iscircular(head)<<endl;
    cout<<"is circular: "<<iscircular(temp)<<endl;


       


}