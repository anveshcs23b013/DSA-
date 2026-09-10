class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
       ListNode* dummy = new ListNode(0,head);
       ListNode* curr = dummy ;

       while(curr->next != nullptr && curr->next->next != nullptr){
            if(curr->next->val == curr->next->next->val){
                int a = curr->next->val;
                while(curr->next != nullptr && curr->next->val == a){
                    curr->next = curr->next->next;
                }
            }
            else{
                curr = curr->next;
            }
       }

       return dummy->next;
    }
};