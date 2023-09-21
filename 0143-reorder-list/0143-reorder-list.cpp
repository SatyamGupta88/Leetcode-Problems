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
    void reorderList(ListNode* head) 
    {
        // if we have zero,one,two node then simply retrn 
        if(!head || !head->next || !head->next->next) return;
        ListNode* temp=head;
        //traverse till lst second node
        while(temp->next->next) temp = temp->next;
        //linked last node to first head->next  
        temp->next->next = head->next;
        //now linked head->next to last second node
        head->next = temp->next;
        //make last seco node to null
        temp->next=nullptr;
        //recursive call to next nodes
        reorderList(head->next->next);

    }
};