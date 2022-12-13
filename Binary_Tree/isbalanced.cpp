height(Node* root){
    if(root==NULL){
        return 0;

    }

    int left= height(root->left);
    int right=height(root->right);

    int ans = max(left,right)+1;
    return ans;

}


void isbalanced(Node* root){
    if(root==NULL){
        return true;

    }
    bool left = isbalanced(root->left);
    bool right = isbalanced(root->right);

    bool diff = abs( height(root->left) - height(root->right)<=1);

    if(left && right && diff){
        return true;
    }
    else{
        return false;
    }
}