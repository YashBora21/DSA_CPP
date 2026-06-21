#include<iostream>
using namespace std;
class node {
    public:
    int data;
    //pointer of node type
    node *next;
    //whenever new node created
    node(int data) {
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
void printdata(node* &head){
    node* temp=head;
    while(temp != NULL){
         cout<<temp->data<<" ";
         temp=temp->next;
    }
    cout<<endl;
   

}
void insertattail(node* &tail,node* curr){
   
        tail->next=curr;
        tail=curr;
    
    
}

node* sortloist(node* &head){
    int zerocount=0;
    int onecount=0;
    int twocount=0;
    node* temp= head;
    while(temp!=nullptr){
        if(temp->data == 0){
            zerocount++;
            temp=temp->next;
        }
        else if(temp->data == 1){
            onecount++;
            temp=temp->next;

        }
        else {
            twocount++;
            temp=temp->next;

        }
    }
    temp=head;
    while(temp!=nullptr){
        if(zerocount !=0){
            temp->data=0;
            zerocount--;
        }
        else if(onecount !=0){
            temp->data=1;
            onecount--;
        }
        else if(twocount!=0){
            temp->data=2;
            twocount--;
        }
        temp=temp->next;
    }
    return head;

    
}
node* sortusinglink(node* head){
    node* zero=new node(-1);
    node* zerotail=zero;
    node* two=new node(-1);
    node* twotail=two;
    node* one=new node(-1);
    node* onetail=one;
    node* temp=head;

    while(temp!=nullptr){
        int value= temp->data;
        if(value==0){
            insertattail(zerotail,temp);
        }
        else if(value==1){
            insertattail(onetail,temp);
        }
        else if(value==2){
            insertattail(twotail,temp);
        }
        temp=temp->next;

    }
    //merge
    if(one->next != NULL){
        zerotail->next=one->next;
    }
    else{
                zerotail->next=two->next;

    }
    onetail->next=two->next;
    twotail->next=nullptr;
    head=zero->next;
    delete zero;
    delete two;
    delete one;
    return head;
}
int main() {
    node* head = nullptr;
    node* tail = nullptr; // Initialize tail
   
 
    insertathead(head, 0);
    insertathead(head, 1);
    insertathead(head, 2);
    insertathead(head, 1);
    insertathead(head, 2);
    
    cout << "Before sort:" << endl;
    printdata(head);
    
    node* sortedList1 = sortloist(head);
    cout << "After sort using sortloist:" << endl;
    printdata(sortedList1);
    
    node* sortedList2 = sortusinglink(head);
    cout << "After sort using sortusinglink:" << endl;
    printdata(sortedList2);
    
    // Clean up memory
    // Ideally, you should implement a function to delete the entire list to avoid memory leaks.
    return 0;
}
