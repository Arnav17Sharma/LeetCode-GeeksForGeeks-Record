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
        ListNode*temp=head;
        ListNode*temp2=head;
        int l = 0;
        while(temp!=NULL){
            l++;
            temp=temp->next;
        }
        for(int i=0; i<l/2; i++){
            temp2=temp2->next;
        }
        return temp2;
    }
};