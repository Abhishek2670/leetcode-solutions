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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* perv = NULL ;

        if(curr == NULL){
            return curr;
        }

        while(curr != NULL){
            ListNode* Next = curr->next;
            curr->next = perv;

            perv = curr;
            curr = Next;
        }
       return head = perv;
    }
};