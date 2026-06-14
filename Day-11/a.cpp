class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* h1 = headA;
        ListNode* h2 = headB;
        bool flag1=  false;
        bool flag2=  false;
        while(h1 && h2){
             if(h1 ==  h2) return h1;
            h1 = h1->next;
             if(h1== nullptr && !flag1){
                flag1 = true;
                 h1= headB;
             } 
            h2= h2->next;
             if(h2== nullptr && !flag2) {
                flag2 = true;
               h2= headA;
             }
        }
        return nullptr;
    }
};