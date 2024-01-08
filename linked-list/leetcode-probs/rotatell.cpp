class Solution {
public:

      int size(ListNode* head){
          int n=0;
          while(head!=NULL){
              n++;
              head=head->next;
          }
          return n;
      }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL){
            return head;
        }
        int n=size(head);
        int loop=k%n;
        loop=n-loop;
        if(n==1 || n==loop){
            return head;
        }
        ListNode* temp=head;
        ListNode* NewHead=head;
        int j=0;
        while(temp!= NULL){
            j++;
            if(j==loop){
                NewHead=temp->next;
                temp->next=NULL;
                break;
            }
            temp=temp->next;
        }
        temp=NewHead;
        while(temp->next!= NULL){
            temp=temp->next;
        } 
        temp->next=head;
        return NewHead;
    }
};
