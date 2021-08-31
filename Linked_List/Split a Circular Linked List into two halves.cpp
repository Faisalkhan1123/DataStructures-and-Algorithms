void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
    
    Node*slow=head;
    Node*fast=head;
    while(fast->next!=head && fast->next->next!=head){
         slow=slow->next;
         fast=fast->next->next;
    }
 
   *head2_ref=slow->next;
    slow->next=head;
    *head1_ref=head;
    Node*temp1=*head2_ref;
    while(temp1->next!=head){
        temp1=temp1->next;
    }
    temp1->next=*head2_ref;
}
