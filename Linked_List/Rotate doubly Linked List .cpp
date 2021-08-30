struct node*update(struct node*start,int p)
{
    //Add your code here
    node*temp=start;
    if(p==0){
        return temp;
    }
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=start;
    start->prev=temp;
    int count=1;
    while(count<=p){
        start=start->next;
        temp=temp->next;
        count++;
    }
    temp->next=NULL;
    start->prev=NULL;
    return start;
}
