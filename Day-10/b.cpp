class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int c = 0;

        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        while (l1 && l2) {
            int sum = l1->val + l2->val + c;
            c = sum / 10;
            sum %= 10;
            curr->next = new ListNode(sum);
            curr = curr->next;
            l1 = l1->next;
            l2 = l2->next;
        }

        while(l1) {
            int sum =l1->val + c;
            c = sum /10;
            sum %=10;
            curr->next =new ListNode(sum);
            curr = curr->next;
            l1 = l1->next;
        }

        while(l2) {
            int sum =l2->val+ c;
            c = sum /10;
            sum %= 10;
            curr->next =new ListNode(sum);
            curr = curr->next;
            l2 =l2->next;
        }

        if (c) curr->next =new ListNode(c);

        return dummy->next;
    }
};