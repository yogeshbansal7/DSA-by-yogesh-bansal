Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
        if(head == NULL || head -> next == NULL){
            return head;
        }
        
        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;
        int count = 0;
        
        
        while (curr != NULL && count < 2){
            
            forward = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
            count ++;
        }
        
        if(forward != NULL){
            head -> next = pairWiseSwap( forward );
        }
        
        return prev;
    }
