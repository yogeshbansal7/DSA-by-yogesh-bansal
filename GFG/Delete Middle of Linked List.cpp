
int getmiddle (Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
           
       temp = temp ->next;
       len++;
   }
   return len;
}
Node* deleteMid(Node* head)
{
    // Your Code Here
    int length = getmiddle(head);
    int ans = length/2;
    
    
    
    Node* temp = head;
    
    if(head == NULL || head -> next == NULL){
        return NULL;
        delete head;
    }
    
    int count = 1;
    while (count < ans){
        
        temp = temp -> next;
        count++;
    }
    
    Node * nodetodelete = temp->next;
    
    temp -> next = temp -> next -> next;
    delete nodetodelete;
    
    return head;
    
    
    
}
