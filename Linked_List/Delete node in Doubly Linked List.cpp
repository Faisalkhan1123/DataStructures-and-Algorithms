class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
      //Your code here
      
      Node*temp=head_ref;
      if(x==1){
          head_ref=temp->next;
          temp->next->prev=NULL;
          delete temp;
      }
      else{
      
      int i=1;
      while(temp!=NULL && i!=x){
          temp=temp->next;
          i++;
      }
      temp->prev->next=temp->next;
      if(temp->next!=NULL){
          temp->next->prev=temp->prev;
      }
      delete temp;
    }
    return head_ref;
    }
};
