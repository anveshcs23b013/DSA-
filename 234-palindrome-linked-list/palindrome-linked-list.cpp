class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {

            ListNode* nextSlow = slow->next;
            ListNode* nextFast = fast->next->next;

            slow->next = prev;
            prev = slow;
            slow = nextSlow;

            fast = nextFast;
        }

        // Odd number of nodes
        if (fast != nullptr) {
            slow = slow->next;
        }

      
        while (prev != nullptr && slow != nullptr) {
            if (prev->val != slow->val)
                return false;

            prev = prev->next;
            slow = slow->next;
        }

        return true;
    }
};