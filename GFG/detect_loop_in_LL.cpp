bool detectLoop(Node* head)
    {
        
        
        Node* slow = head;
        Node* fast = head -> next;
        
        while(slow != NULL && fast != NULL){
            fast = fast-> next;
            if(fast!=NULL){
                fast = fast ->next;
            }
            slow = slow->next;
            
            if(slow == fast){
                return true;
            }
        }
        return false;
        // your code here
    }
