vector<int> levelOrder(Node* node)
    {
      //Your code here
        queue<Node*> q;
        vector<int> ans;
      
        q.push(node);
      
        while(!q.empty()){
            Node* temp = q.front();
            q.pop();
            ans.push_back(temp -> data);
            
            if(temp -> left != NULL){
                q.push(temp -> left);
            }
            if(temp -> right != NULL){
                q.push(temp -> right);
            }
            
        }
        return ans;
    }
