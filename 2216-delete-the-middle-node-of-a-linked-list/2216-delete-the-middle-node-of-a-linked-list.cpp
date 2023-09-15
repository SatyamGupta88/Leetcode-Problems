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
    ListNode* deleteMiddle(ListNode* head) 
    {
        if(head == nullptr ||head->next == nullptr) return NULL;
        ListNode* temp=head;
        int len = 0;
        while(temp)
        {
            len++;
            temp = temp->next;
        }    
        temp = head;
        int i=0;
        while(i<len/2-1)
        {
            i++;
            temp = temp ->next;
        }
        temp->next = temp->next ->next;
        return head;
    }
};