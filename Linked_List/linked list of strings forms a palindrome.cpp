bool compute(Node* root)
{
   //Your code goes here
   string s="";
   Node* temp=root;
   while(temp!=NULL){
      s.append(temp->data);
       temp=temp->next;
   }
   string p=s;
   reverse(s.begin(), s.end());
   return p==s;
}
