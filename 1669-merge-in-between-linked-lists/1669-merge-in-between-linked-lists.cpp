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
  ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
    ListNode* prevA = list1;
    for (int i = 0; i < a - 1; ++i)
      prevA = prevA->next;
    
    ListNode* nodeB = prevA->next;
    for (int i = 0; i < b - a; ++i)
        nodeB = nodeB->next;
    
    prevA->next = list2;
    ListNode* last2 = list2;
    while (last2->next != nullptr)
      last2 = last2->next;
    last2->next = nodeB->next;
    nodeB->next = nullptr;
    return list1;
  }
};