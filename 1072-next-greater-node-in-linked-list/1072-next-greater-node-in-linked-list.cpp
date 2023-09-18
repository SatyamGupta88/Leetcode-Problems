class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        stack<int> s;
        vector<int> v;
        ListNode *ptr=head;
        while(ptr)
        {
            v.push_back(ptr->val);
            ptr=ptr->next;
        }
        int n=v.size();
        vector<int> ans(n,0);
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() and v[s.top()]<=v[i]) s.pop();
            if(!s.empty()) ans[i]=v[s.top()];
            s.push(i);
        }
        return ans;
    }
};