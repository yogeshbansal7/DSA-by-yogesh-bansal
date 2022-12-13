height(Node* root){
    if(root==NULL){
        return 0;

    }

    int left= height(root->left);
    int right=height(root->right);

    int ans = max(left,right)+1;
    return ans;

}

int diameter(Node* root){
    if(root==NULL){
        return 0;

    }

    int op1=diameter(root->left);
    int op2=diameter(root->right);
    int op3=height(root->left) + height(root->right) + 1;

    int ans = max(op1 , max(op2, op3));
    return ans;
}