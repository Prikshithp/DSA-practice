
class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     if(head==NULL){
         return head;
     }
     unordered_set<int>seen;
     Node* curr=head;
     if(curr==NULL){
         return head;
     }
     else{
         seen.insert(curr->data);
     }
     while(curr!=NULL &&  curr->next!=NULL){
         if(seen.find(curr->next->data)!=seen.end()){
             //same
             curr->next=curr->next->next;
         }
         else{
             seen.insert(curr->next->data);
             curr=curr->next;
         }
     }
     return head;
    }
};
