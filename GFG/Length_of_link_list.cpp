int isLengthEvenOrOdd(struct Node* head)
{
    //Code here

     Node* temp = head;
     int count = 0;
     while(temp != NULL){
         
         temp = temp -> next;
         count ++ ;
     }
     
     if(count % 2==0){
         return 0;
     }
     else{
         return 1;
     }
    
    
}
