class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head || head->next == nullptr)return nullptr;
        ListNode* slow = head;
        ListNode* fast= head;

        while(fast && fast->next ){
            slow = slow ->next;
            fast = fast ->next->next;
            if(slow == fast) break;
        }

        if (!fast || !fast->next) return nullptr;

        ListNode* temp = head;

        while(temp != slow){
            temp = temp->next;
            slow = slow->next;
        }

        return slow;
    }
};