Node* deleteMid(Node* head)
{
    // Your Code Here
    if(head==NULL or head->next==NULL){
        return NULL;
    }
    Node*temp=head;
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL && fast->next!=NULL){
          temp=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
     temp->next=slow->next;
    
      return head;;
}
