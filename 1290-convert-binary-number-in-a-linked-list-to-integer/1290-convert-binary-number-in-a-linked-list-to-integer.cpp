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
    int getDecimalValue(ListNode* head) {
        int c = -1, ans=0;
        ListNode*temp = head;
        vector<int> v;
        while(temp!=NULL){
            c++;
            v.push_back(temp->val);
            temp=temp->next;
        }
        for(auto x: v){
            ans += (pow(2, c)*x);c--;
        }
        return ans;
    }
};