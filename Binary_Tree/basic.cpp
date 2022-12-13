#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this-> data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* buildtree(Node* root){
    int data;
    cin>>data;
    root=new Node(data);

    if (data==-1){
        return NULL;
    }

    root->left=buildtree(root->left);
    root->right=buildtree(root->right);
    return root ;
}


void inoder(Node* root){
    if(root==NULL){
        return ;
    }

    inoder(root->left);
    cout<<root->data<<" ";
    inoder(root->right);
}

void preorder(Node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    
    preorder(root->right);
}


void postorder(Node* root){
    if(root==NULL){
        return ;
    }
    
    postorder(root->left);
    
    postorder(root->right);
    cout<<root->data<<" ";
}




int main(){
    Node* root  = NULL;
    root = buildtree(root);
    inoder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);

}