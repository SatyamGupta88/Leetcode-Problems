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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) 
    {
      int cnt1 = 1;
      // int cnt2 = 0;
      ListNode* tp1 = list1;
      ListNode* tp2 = list1;
      ListNode* list2tail = list2;

      while(list2tail->next) list2tail = list2tail->next;

      while(cnt1++<a) tp1 = tp1->next;

      while(b--) tp2 = tp2->next;
      
      ListNode * temp = tp2->next;
      tp1->next = list2;
      list2tail->next = temp;
      return list1;
    }
};