Node* sortList(Node *head){
    // Write your code here.
    if(head==NULL || head->next ==NULL){
        return head;
    }
    Node* zeroHead=new Node(-1);
    Node* oneHead=new Node(-1);
    Node* TwoHead=new Node(-1);
    Node* zero=zeroHead;
    Node* one = oneHead;
    Node* two=TwoHead;
    Node* curr=head;
    while(curr!=NULL){
        if(curr->data==0){
            zero->next=curr;
            zero=zero->next;
        }
        else if(curr->data==1){
            one->next=curr;
            one=one->next;
        }
        else{
            two->next=curr;
            two=two->next;
        }
        curr=curr->next;
    }
    zero->next=(oneHead->next)? (oneHead->next) : (TwoHead->next);
    one->next=TwoHead->next;
    two->next=NULL;
    Node* newHead=zeroHead->next;
    delete zeroHead;
    delete oneHead;
    delete TwoHead;
    return newHead;
}
