#include <iostream>
using namespace std;
class node{
    public:
    int data; 
    node* next;
    node* random;
    node (int data){
        this->data=data;
        this->next=NULL;
        this->random=nullptr;

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

    
    node* copy(node* head){
        node* clonehead=nullptr;
        node* clonetail=nullptr;
        node* temp=head;
        while(temp!=nullptr){
            insertattail(clonehead,clonetail,temp->data);
            temp=temp->next;
        }
        //step2 create a map
        unorderd_map<node*,node*>oldtonewnode;
        node* orignalnode=head;
        node* clonenode=clonehead;
        while(orignalnode!=nullptr){
            oldtonewnode[orignalnode]=clonenode;
            orignalnode=orignalnode->next;
            clonenode=clonenode->next;

        }
        //step3 arrange random pointer
        orignalnode=head;
        clonenode=clonehead;
        while(orignalnode!=nullptr){
            clonenode->random=oldtonewnode[orignalnode->random];
        }
        return clonehead;
    }
    //without using map 
     node* copylist(node* head){
        //step1
        node* clonehead=nullptr;
        node* clonetail=nullptr;
        node* temp=head;
        while(temp!=nullptr){
            insertattail(clonehead,clonetail,temp->data);
            temp=temp->next;
        }
        //step2 clone node add into orignal node
        node* orignal=head;
        node* clone=clonehead;
        while(orignal!=nullptr && clone!=nullptr){
            node* forward=orignal->next
            orignal->next=clone;
            orignal=forward;
            forward= clone->next;
            clone->next=orignal;
            clone=forward



        }
        temp=head;
        while(temp!=NULL){
            if(temp->next!=nullptr){
                if(temp->randon!=nullptr){
            temp->next->random=temp->random->next;
            }
                 else{
                temp->next=temp->random;
            }
            temp=temp->next->next;
        }
        }
        //step 4 revert
        orignal=head;
        clone=clonehead;
            while(orignal!=nullptr && clone!=nullptr){
          
            orignal=clone->next;
            orignal=orignal->next;
    if(orignal==nullptr){
            clone=orignal->next;
            clone=clpne->next;
    }



        }
        return clonehead;
     }
