int length(Node *head)
{
	//Write your code here
    int count =0;
    Node* temp=head;
    while(temp){
        temp=temp->next;
        count++;
    }
   return count;
}
