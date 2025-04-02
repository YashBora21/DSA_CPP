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
bool ispali(node* head){

    int i=0;
    node* temp=head;
    int cnt=0;
     while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
       int *arr=new int[cnt];
    
        temp=head;
    while(temp!=NULL){
        arr[i++]=temp->data;
        temp=temp->next;
    }
    int s=0;
    int e=cnt-1;
   while(s<=e){
        if(arr[s++]!=arr[e--]){
            return false;
        }
        
    }
    return true;
    delete[] arr;
}
node* mid(node* head){
    node*fast=head;
    node*slow=head;
    while(fast!=nullptr && fast->next!=nullptr){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
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
bool checkpalli(node* head){
    if(head== nullptr || head->next==nullptr){
        return true;
    }
    //step 2 reverse after mid
    node* head2=mid(head);
    node* temp=head2->next;
    head2->next=reverse(temp);
    //step3 compare both half
    node* comp1=head;
    node* comp2=head2->next;
    while(comp2!=nullptr){
        if(comp1->data!=comp2->data){
            return false;
        }
        comp1=comp1->next;
        comp2=comp2->next;
    }
    //step 4 do linkedlist as it is
   
    head2->next=reverse(temp);
    return true;

}
int main(){
    node* head= NULL;
   
    insertathead(head,1);
    insertathead(head,2);
    insertathead(head,2);
     insertathead(head,1);
    cout<<"the list is:"<<endl;
    print(head);
    cout<<"is pallidrone:"<<ispali(head)<<endl;
      cout<<"is pallidrone:"<<checkpalli(head);
}