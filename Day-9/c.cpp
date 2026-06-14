class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* a = list1;
        ListNode* b = list2;

        if(!a)return b;
        if(!b)return a; 

        ListNode* curr = new ListNode(0);
        ListNode* ans= curr; 
        while(a && b){
            if(a->val <= b->val){
                ans->next =a ; 
                a=a->next ;
            }else{
                ans->next = b;
                b = b->next ;
            }
            ans = ans->next ;
            ans->next  = nullptr;
        }

        while(a){
                ans->next =a ; 
                a=a->next ;
                ans = ans->next ;
        }
        while(b){
                ans->next =b ; 
                b=b->next ;
                ans = ans->next ;
        }
 
        return curr->next; 
    }
};