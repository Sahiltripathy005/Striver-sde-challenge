class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int len = 0 ; 

        ListNode* curr= head; 
        while(curr){
            len++;
            if(!curr->next)break; 
            curr=curr->next; 
        }
        if(len == 0 || len == 1)return head; 
        curr->next= head; 
        k%= len ; 
        for(int i = 0 ; i<len-k-1; i++){
            head= head->next; 
        }
        ListNode* temp = head; 
        head=head->next; 
        temp->next = nullptr; 
        return head; 
    }
};