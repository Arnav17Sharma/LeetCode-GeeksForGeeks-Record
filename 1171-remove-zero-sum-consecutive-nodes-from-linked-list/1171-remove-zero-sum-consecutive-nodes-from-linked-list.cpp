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
  ListNode* removeZeroSumSublists(ListNode* head) {
    ListNode temp(0, head);
    int prefix = 0;
    unordered_map<int, ListNode*> p;
    p[0] = &temp;
    for (; head; head = head->next) {
      prefix += head->val;
      p[prefix] = head;
    }
    prefix = 0;
    for (head = &temp; head; head = head->next) {
      prefix += head->val;
      head->next = p[prefix]->next;
    }
    return temp.next;
  }
};