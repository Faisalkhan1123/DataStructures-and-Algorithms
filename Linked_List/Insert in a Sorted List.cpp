class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
        Node*temp=new Node(data);
        Node*p=head->next;
        Node*q=head;
        if(data<head->data){
            temp->next=head;
         return temp;
        }
        while(p!=NULL){
            if(p->data>data){
                temp->next=p;
                q->next=temp;
                return head;
            }
           
            q=p;
             p=p->next;
        }
        q->next=temp;
        return head;
    }
};
