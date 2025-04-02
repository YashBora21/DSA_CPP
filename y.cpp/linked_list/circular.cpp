#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;

    }

    ~node(){
        int value=this->data;
        if(this->next !=NULL){
            delete this->next;
            next=NULL;
   
        }
                    cout<<"memory is free from the node is:"<<value<<endl;


    }
};
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
    void deletenode(node* &tail,int value){
        //empty
        if(tail==NULL){
            cout<<"list is empty"<<endl;
            return;

        }
        else{
            //on basisi of value
            node* prev=tail;
            node*current=prev->next;
            while(current->data !=value){
                prev=current;
                current=current->next;
            }
            //for one node
          
    
            prev->next=current->next;
              if(current==prev){
                tail=NULL;
            }
            //for >=2nodes
           else  if(tail==current){
        tail=prev;
    }
            current->next=nullptr;
            delete current;

        }
    }
    void print(node* tail){
        if(tail==NULL){
            cout<<"no element ot print"<<endl;
            return;
        }
    node * temp=tail;
   do{
    cout<<temp->data<<" ";
    temp=temp->next;

   }
   while(temp!=tail);
   cout<<endl;
}
    
    
int main(){
   
    node* tail=NULL;
    insertnode(tail,4,3);
     insertnode(tail,3,5);
     insertnode(tail,5,6);
   insertnode(tail,5,4);
       print(tail);
       deletenode(tail,5);
       print(tail);


}