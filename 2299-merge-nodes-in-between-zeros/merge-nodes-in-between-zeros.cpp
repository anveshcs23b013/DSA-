/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
    int ct = 0;
    head = head->next;
    ListNode*temp=  head;
    ListNode*slow=temp ;
ListNode*fast= head ;

    while(fast!=nullptr){
        ct+= (fast->val);
        if(fast->val==0){
            slow->val= ct;
            slow->next= fast->next;
            slow = slow->next;
           
            ct= 0;
        }       
            fast=fast->next;  
    }
    return temp ;
    }
};