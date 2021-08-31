class Solution
{
    public:
    Node *sortedInsert(Node* head, int data)
    {
       //Your code here
      Node*temp=new Node(data);
      if(head==NULL){
          temp->next=head;
          head=temp;
          return head;
      }
      Node*h1=head;
      while(h1->next!=head){
          h1=h1->next;
      }
      if(data<=head->data){
          temp->next=h1->next;
          h1->next=temp;
          head=temp;
      }
      else if(data>=h1->data){
          temp->next=h1->next;
          h1->next=temp;
      }
      else{
          Node*prev=head;
          while(prev->data<=data && prev->next->data<=data){
              prev=prev->next;
          }
          temp->next=prev->next;
          prev->next=temp;
      }
     return head;
    }
};
