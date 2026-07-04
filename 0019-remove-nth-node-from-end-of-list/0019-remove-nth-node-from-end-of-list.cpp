class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int size = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            size++;
            temp = temp->next;
        }

        if (size == n) {
            return head->next;
        }

        ListNode* prev = head;

        for (int i = 1; i < size - n; i++) {
            prev = prev->next;
        }

        prev->next = prev->next->next;

        return head;
    }
};