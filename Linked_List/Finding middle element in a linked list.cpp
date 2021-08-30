int getMiddle(Node *head)
{
   // Your code here
   Node*temp=head;
   if(head==NULL){
       return -1;
   }
   
   Node*slow=temp;
   Node*fast=temp;
   
       while(fast!=NULL && fast->next!=NULL){
           fast=fast->next->next;
           slow=slow->next;
       }
       
       return slow->data;
       
   }
