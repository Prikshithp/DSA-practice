class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n1 =0,n2=0;
        ListNode* curr=headA;
        while(curr!=NULL){
            n1++;
            curr=curr->next;
        }
        curr=headB;
        while(curr!=NULL){
            n2++;
            curr=curr->next;
        }
        int dif=abs(n1-n2);
        if(n1<n2){
            while(dif--){
                headB=headB->next;
            }
        }
        else{
            while(dif--){
                headA=headA->next;
            }
        }
        while(headA and headB){
            if(headA==headB){
                return headB;

            }
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};
