ListNode *moveToFront(ListNode *head){
        if (head == NULL || head -> next == NULL){
            return head;
        }
        
        ListNode* secondlast = NULL;
        ListNode* last = head;
        
        while (last -> next != NULL){
            
            secondlast = last;
            last = last -> next;
        }
        
        secondlast -> next = NULL;
        last -> next = head ;
        head = last;
        
        return head;
    }
