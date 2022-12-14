struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        
        if(head == NULL || head -> next == NULL){
            return head;
        }
        
        node* prev = NULL;
        node* curr = head;
        node* forward = NULL;
        int count = 0;
        
        
        while (curr != NULL && count < k){
            
            forward = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
            count ++;
        }
        
        if(forward != NULL){
            head -> next = reverse( forward ,k);
        }
        
        return prev;
    }
