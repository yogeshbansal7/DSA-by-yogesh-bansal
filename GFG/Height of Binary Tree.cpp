int height (struct Node* root){
        if(root == NULL){
            return 0;
        }
        int left = height(root->left);
        int right = height(root -> right);
        
        int ans = max(left , right) +1 ;
        return ans;
    }
