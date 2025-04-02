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
void insertattail(node* &tail,node* curr){
   
        tail->next=curr;
        tail=curr;
    
    
}
void print(node* &head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
node* solve(node* first,node* second){
    node* curr1=first;
    node* next1=curr1->next;
    node* curr2=second;
    while(next1 != nullptr && curr2!=nullptr){
        if((curr2->data >= curr1->data)&&(curr2->data<=next1-> data)){
            curr1->next=curr2;
            node* next2=curr2->next;
            curr2->next=next1;
            curr1=curr2;
            curr2=next2;

    }
    else{
        curr1=next1;
        next1=next1->next;
        if(next1==nullptr){
            curr1->next=curr2;
            return first;
            
        }
    }

    }
    return first;

}
node* merge(node* head1, node* head2){
     if(head1==NULL){
        return head2;
     }
     else if(head2==NULL){
        return head1;
     }
     if(head1->data<=head2->data){
       return solve(head1,head2);
     }
     else{
        return solve(head2,head1);
     }
   

}
int main(){
    node* head= NULL;
    node* current=NULL;
    node* prev=NULL;
    insertathead(head,5);
    insertathead(head,3);
    insertathead(head,1);
    insertathead(current,5);
    insertathead(current,4);
    insertathead(current,2);
    node* temp= merge(head,current);
    print(temp);
    


}