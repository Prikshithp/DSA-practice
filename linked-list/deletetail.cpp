Node *deleteLast(Node *head){
    // Write your code here
   if(head==NULL || head->next ==NULL){
       return NULL;
   }
   Node* temp=head;
   while(temp->next->next!=NULL){
       temp=temp->next;
   }
   delete temp->next;
   temp->next=nullptr;
   return head;
}
