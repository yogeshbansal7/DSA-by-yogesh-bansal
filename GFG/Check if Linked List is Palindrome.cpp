bool isPalindrome(Node *head)
    {
        int i;
        //Your code here
        Node* temp = head;
        int n = 0;
        while(temp != NULL){
            temp = temp -> next;
            n++;
        }
        
        int arr[n];
        temp = head;
        for(i=0;i<n;i++){
            arr[i] = temp->data;
            temp = temp -> next;
        }
        
        int s = 0;
        int e = n-1;
        
        while(s<=e){
            if(arr[s] != arr[e]){
                return 0;
            }
            s++;
            e--;
        }
        return 1;
        
    }
