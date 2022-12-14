Node *removeDuplicates(Node *head)
{
 // your code goes here
 
 
 Node* temp = head;
 while(temp != NULL){
     if(temp -> next != NULL  &&  temp->data == temp->next->data){
         Node* next_next = temp->next->next;
         Node* nodetodelete = temp -> next;
         delete nodetodelete;
         temp->next = next_next;
     }
     else{
         temp = temp -> next;
     }
 }
 return head;
}
