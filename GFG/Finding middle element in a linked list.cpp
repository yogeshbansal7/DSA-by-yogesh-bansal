int getlength(Node*head){
        int len=0;
        while(head!=NULL){
            len ++;
            head=head->next;
        }
        return len;
    }
    int getMiddle(Node * head)
    {
        // Your code here
        int length = getlength(head);
        int ans = length/2;
        
        Node* temp = head;
        int count =0;
        while(count<ans){
            temp = temp->next;
            count ++ ;
            
        }
        
        return temp->data;
    }
