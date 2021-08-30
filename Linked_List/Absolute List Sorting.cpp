void sortList(Node** head)
{
    // Your Code Here
    Node*temp1=*head;
    Node*temp;
    while(temp1!=NULL){
        temp=temp1->next;
        while(temp!=NULL){
            if(temp1->data>temp->data){
                swap(temp1->data,temp->data);
            }
            temp=temp->next;
        }
        temp1=temp1->next;
        
    }
    return;
}
