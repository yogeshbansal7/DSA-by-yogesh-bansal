pair<bool , int> answer (Node* root){
        if(root == NULL){
            pair<bool,int> p = make_pair(true , 0);
            return p;
        }
        
        if(root -> left == NULL && root -> right == NULL){
            pair<bool,int> p = make_pair(true , root -> data);
            return p;
        }
        
        pair<bool,int> leftans = answer(root -> left);
        pair<bool,int> rightans = answer(root -> right);
        
        bool left = leftans.first;
        bool right = rightans.first;
        
        bool condition = root -> data == leftans.second + rightans.second ;
        
        pair<bool , int> final;
        if(left && right && condition){
            final.first = true;
            final.second = 2*(root->data);
        }
        else{
            final.first = false;
        }
        
        return final;
        
    }
    
    
    
    
    bool isSumTree(Node* root)
    {
         // Your code here
         return answer(root).first ;
    }
