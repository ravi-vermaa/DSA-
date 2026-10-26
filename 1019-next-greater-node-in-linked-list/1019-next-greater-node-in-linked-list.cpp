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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        while(head!=NULL){
            ListNode* temp=head->next;
            int greater=0;
            while(temp!=NULL){
                if(temp->val>head->val){
                    greater=temp->val;
                    break;
                }    
                temp=temp->next;
            }
            ans.push_back(greater);
            head=head->next;
        }
        return ans;
    }
};