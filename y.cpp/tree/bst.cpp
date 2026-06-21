#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class Node{
    public :
    int data;
    Node *right;
    Node *left;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};

Node *buildtree(Node *root){
    cout<<"enter the data"<<endl;
    int data;
    cin>>data;
    root=new Node(data);
    if(data==-1) return NULL;
    cout<<"Entering data in left of node"<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"Entering data in right of node"<<data<<endl;
    root->right=buildtree(root->right);
    return root;   
}
void levelordertraversal(Node *root){
     queue<Node*> q;
     q.push(root);
     int level=0;
     while(!q.empty()){
        
        int size=q.size();
         cout<<"Level "<<level<<": ";
        for(int i=0;i<size;i++){
            Node *remove=q.front();q.pop();
            cout<<remove->data<<" ";
            if(remove->left!=NULL){ q.push(remove->left);}
            if(remove->right!=NULL) {q.push(remove->right);}
        }
        cout<<endl;
        level++;

     }

}
void reverseordertraversal(Node *root){
     queue<Node*> q;
     stack<Node*> st;
     q.push(root);
     int level=0;
     while(!q.empty()){
        
        int size=q.size();
         
        for(int i=0;i<size;i++){
            Node *remove=q.front();q.pop();
            st.push(remove);
            if(remove->right!=NULL){ q.push(remove->right);}
            if(remove->left!=NULL) {q.push(remove->left);}
        }

        

     }
     while(!st.empty()){
        
        
            cout<<st.top()->data<<" ";
            st.pop();
        
     
        
    }
}
void inordertraversal(Node *root){
    if(root==NULL) return;
    inordertraversal(root->left);
    cout<<root->data<<" ";
    inordertraversal(root->right);
}
void postordertraversal(Node *root){
    if(root==NULL) return;
    postordertraversal(root->left);
    
    postordertraversal(root->right);
    cout<<root->data<<" ";
}
void preordertraversal(Node *root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preordertraversal(root->left);
    preordertraversal(root->right);
}

void buildtreelevelordertraversal(Node *&root){
    queue<Node*>q;
    int data;
    cout<<"enter the data for root"<<endl;
    
    cin>>data;
    root=new Node(data);
    q.push(root);
    while(!q.empty()){
        Node *temp=q.front();
        q.pop();
        int leftdata;
        cout<<"Enter the left data for "<<temp->data<<endl;
        cin>>leftdata;
        
        if(leftdata!=-1){
            temp->left=new Node(leftdata);
            q.push(temp->left);
        }
        int rightdata;
        cout<<"Enter the right data for "<<temp->data<<endl;

        cin>>rightdata;
        if(rightdata!=-1){
            temp->right=new Node(rightdata);
            q.push(temp->right);
        }
    }
}

int main(){
    int data;
    Node* root=NULL;
    //root=buildtree(root);
   /* levelordertraversal(root);
    reverseordertraversal(root);
    cout<<endl<<"inorder :";
    inordertraversal(root);
    cout<<endl<<"preorder :";
    preordertraversal(root);
    cout<<endl<<"postorder :";
    postordertraversal(root);*/
    buildtreelevelordertraversal(root);
    levelordertraversal(root);
    return 0;

    //1 3 7 -1 -1  11 -1 -1 5 17 -1 -1 -1 
}

