class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node*revhead(Node*head){
         Node*C=head;
     Node*p=NULL;
     Node*N;
     while(C!=NULL){
         N=C->next;
         C->next=p;
         p=C;
         C=N;
     }
     return p;
    }
    bool isPalindrome(Node *head)
    {
        //Your code here
    Node*slow=head;
    Node*fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node*temp=revhead(slow->next);

    while(temp!=NULL){
        if(temp->data!=head->data){
            return false;
        }
        head=head->next;
        temp=temp->next;
    }
     return true;
    }
};
