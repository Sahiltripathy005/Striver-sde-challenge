class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr= head; 
        ListNode dummy(0);
        dummy.next = head; 

        ListNode* prev = &dummy ;
        ListNode* ans = &dummy;
        while(true){
            ListNode* temp  = curr;
            int cnt = 0; 
            while(temp && cnt<k){
                cnt++;
                temp=temp->next;
            }

            if(cnt<k) break;
            else{
                for(int i = 1 ; i<k;i++){
                    ListNode* val = curr->next; 
                    curr->next = val->next;
                    val->next = prev->next;
                    prev->next= val ;
                }
                prev= curr;
                curr = curr->next;
            }
        }
        return ans->next; 
    }
};