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
    ListNode* middleNode(ListNode* head) {
        int n = 0;
        for(ListNode *ptr = head ; ptr != NULL ; ptr =  ptr->next){
            n++; // it will give size of pointeer or size of ll
        }
        ListNode *mid =head;
        for(int i = 0 ; i < n/2 ; i++){
            mid = mid->next; // it will return the middle node
        }
        return mid; //it helps to print the all node after middle 

    }
};