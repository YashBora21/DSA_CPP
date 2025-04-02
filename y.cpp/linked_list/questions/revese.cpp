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
node* reverse(node* &head){
    if(head == NULL || head->next == NULL) return head;
    node* prev=nullptr;
    node* current=head;
    while(current !=nullptr){
        node* forward= current->next;
        current->next=prev;
        prev=current;
        current=forward;
            }
            head=prev;
            return head;
}
node* reverserecurcively(node* &head,node* current,node* prev) {
    
    //base
    if(current==NULL){
        head=prev;
        return head;
    }
     node* forward= current->next;
       current->next=prev;
  return  reverserecurcively(head,forward,current);
   

}
node* reverserecurcively2(node* &head){
    if(head==NULL || head->next==NULL) {
        return head;
    }
    node* chotinode=reverserecurcively2(head->next);//eg list is 3-4-5-6 then choti node is 4-5-6 it become 6-5-4
    head->next->next=head;//means 4 next point to 3
    head->next=NULL;//means 3 pint nullptr
    return chotinode;
}
void print(node* &head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* head= NULL;
    node* current=NULL;
    node* prev=NULL;
    insertathead(head,11);
    insertathead(head,13);
    insertathead(head,14);
        cout<<"before reverse:"<<endl;
        print(head);
          head = reverse(head);
        cout << "After reverse:" << endl;
          print(head);
            cout<<"after  reverserecurcively :"<<endl;
            reverserecurcively(head,head,nullptr);
             print(head);
             cout<<"after  reverserecurcively :"<<endl;
            reverserecurcively2(head);
             print(head);
             



}