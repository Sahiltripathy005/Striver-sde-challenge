class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next)return head; 

        ListNode* curr= head; 
        ListNode* ans = head;
        while(curr->next){
            ListNode* nxt= curr->next;
            curr->next= nxt->next; 
            nxt->next = ans; 
            ans = nxt; 
        }
        return ans ; 
    }
};