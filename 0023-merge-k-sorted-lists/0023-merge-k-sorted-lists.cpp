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
    ListNode* mergeKLists(vector<ListNode*>& lists)
    {
        //min-heap
        priority_queue<pair<int, ListNode*>, vector<pair<int, ListNode*>>, greater<pair<int, ListNode*>>> pq;
        //store value along with its node
        // why we store node in pq.because we can reuse it is good for our complexities
        for(int i = 0; i < lists.size(); i++)
        {
            ListNode* temp = lists[i];
            while(temp)
            {
                pq.push({temp->val, temp});
                temp = temp->next;
            }
        }
        //in pq value are nodes are sorted acc to their values
        //now take our those node stored in pq and create LL
        ListNode* dummy = new ListNode(-1);
        ListNode* head = dummy;
        while(!pq.empty()){
            dummy->next = pq.top().second;
            pq.pop();
            dummy = dummy->next;
        }
        return head->next;
    }
};