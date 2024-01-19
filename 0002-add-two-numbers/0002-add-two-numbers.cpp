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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* curr = &dummy;
        int d1 = 0, d2 = 0, carry = 0;
        while(l1!=NULL || l2!=NULL || carry){
            if(l1){d1 = l1->val;l1=l1->next;}
            if(l2){d2 = l2->val;l2=l2->next;}
            int sum = d1 + d2 + carry;
            carry = (sum)/10;
            curr -> next = new ListNode(sum%10);
            d1 = 0; d2 = 0;
            curr = curr -> next;
        }
        return dummy.next;
    }
};