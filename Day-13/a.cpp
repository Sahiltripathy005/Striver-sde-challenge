class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)return head; 
        Node* curr= head; 
        while(curr){
            Node* temp = new Node(curr->val);
            temp->next= curr->next; 
            curr->next= temp ;
            curr = temp->next; 
        }
        curr= head; 
        Node* ans = head->next; 
        while(curr){
            curr->next->random = curr->random == nullptr ? nullptr : curr->random->next; 
            curr=  curr->next->next; 
        }

        curr= head;
        while(curr){
            Node* temp = curr->next ;
            curr->next= temp->next;
           if(temp->next)
        temp->next = temp->next->next;
            curr= curr->next;
        } 
        return ans ;
    }
};