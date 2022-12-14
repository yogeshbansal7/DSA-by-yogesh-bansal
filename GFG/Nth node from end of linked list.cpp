int getNthFromLast(Node *head, int n)
{
       // Your code here
       int len = 0;
       Node* temp = head;
       while(temp != NULL){
           
           temp = temp ->next;
           len++;
       }
       
       if (len < n){
           return -1;
       }
       
       temp = head;
       int count =1;
       while (count < len - n +1){
           
           temp = temp -> next;
           count ++;
       }
       
       return temp->data;
}
