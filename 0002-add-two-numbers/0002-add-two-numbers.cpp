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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        int sum = 0;
        int carry = 0;
        int digit = 0;
        ListNode* dummy = new ListNode(-1);
        ListNode* newHead = dummy;
        //traverse the linked list
        while(l1 || l2 ||carry !=0)
        {
            int num1 = (l1) ? l1->val :0;
            int num2 = (l2) ? l2->val :0;
            sum = carry + num1 + num2;
            //extract carry
            carry = sum/10;
            // extract digit
            digit = sum%10;
            //create node of newly  linked list
            ListNode* newnode = new ListNode(digit);
            //set pointers
            newHead->next = newnode;
            newHead = newHead->next;
            //move to next node
            l1 = (l1) ? l1->next:NULL;
            l2 = (l2) ? l2->next:NULL;
        }  
        return dummy->next;
    }
};