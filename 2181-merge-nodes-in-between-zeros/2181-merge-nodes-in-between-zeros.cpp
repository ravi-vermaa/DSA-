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
        ListNode* curr = head->next;
        ListNode* result = head;

        int sum = 0;

        while (curr != NULL) {
            if (curr->val != 0) {
                sum += curr->val;
            } 
            else {
                result->val = sum;
                sum = 0;

                if (curr->next != NULL) {
                    result = result->next;
                }
            }

            curr = curr->next;
        }
        result->next = NULL;

        return head;
    }
};