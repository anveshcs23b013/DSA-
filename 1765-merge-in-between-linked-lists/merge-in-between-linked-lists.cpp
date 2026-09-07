class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {

        ListNode* prev = list1;

        // reach node at index a-1
        for(int i = 0; i < a - 1; i++) {
            prev = prev->next;
        }

        // reach node at index b+1
        ListNode* temp = prev;
        for(int i = a; i <= b; i++) {
            temp = temp->next;
        }

        // connect node before a to list2
        prev->next = list2;

        // find last node of list2
        ListNode* temp2 = list2;
        while(temp2->next != nullptr) {
            temp2 = temp2->next;
        }

        // connect list2 to node after b
        temp2->next = temp->next;

        return list1;
    }
};