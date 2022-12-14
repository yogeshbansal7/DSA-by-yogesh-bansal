void insrtattail(Node* &tail, int d){
        // new node create
        Node* temp = new Node(d);
        tail -> next = temp;
        tail  = temp;
        }
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        // int zerocount = 0;
        // int onecount = 0;
        // int twocount = 0;
        
        // Node* temp = head;
        // while ( temp != NULL){
        //     if(temp->data == 0){
        //         zerocount++;
        //     }
        //     if(temp->data == 1){
        //         onecount++;
        //     }
        //     if(temp->data == 2){
        //         twocount++;
        //     }
            
        //     temp = temp -> next;
            
        //     temp = head;
        
        // }
        
        // while(temp!= NULL){
        //     if(zerocount != 0){
        //         temp -> data = 0;
        //         zerocount--;
        //     }
        //     if(onecount != 0){
        //         temp -> data = 1;
        //         onecount--;
        //     }
        //     if(twocount != 0){
        //         temp -> data = 2;
        //         twocount--;
        //     }
        // }
        
        // return head;
        
        
        
        
        Node* zerohead = new Node(-1);
        Node* zerotail = zerohead;
        Node* onehead = new Node(-1);
        Node* onetail = onehead;
        Node* twohead = new Node(-1);
        Node* twotail = twohead;
        
        
        Node* curr = head;
        while(curr!= NULL){
            int value = curr->data;
            
            if(value == 0){
                insrtattail(zerotail,value);
            }
            if(value == 1){
                insrtattail(onetail,value );
            }
            if(value == 2){
                insrtattail(twotail,value);
            }
            
            curr = curr -> next;
            
        }
        
        if (onehead-> next != NULL){
            zerotail -> next = onehead -> next;
        }
        else{
            zerotail -> next = twohead -> next;
        }
        
        onetail -> next = twohead -> next;
        twotail -> next = NULL;
        
        
        head = zerohead -> next;
        
        return head;
    }
