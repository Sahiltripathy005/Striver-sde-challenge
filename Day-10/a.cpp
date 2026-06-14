class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* slow = &dummy ;
        ListNode* fast= &dummy ;

        for(int i = 0 ; i<=n;i++){
            fast= fast->next ;
        }

        while(fast){
            fast = fast->next ; 
            slow = slow->next ; 
        }

        ListNode* temp = slow->next;
        slow->next = temp->next; 

        delete temp ; 

        return  dummy.next ; 
    }
};