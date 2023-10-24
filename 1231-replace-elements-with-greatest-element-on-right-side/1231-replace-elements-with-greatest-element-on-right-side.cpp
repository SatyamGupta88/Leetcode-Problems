class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        stack<int> st;
        int n = arr.size();
        // last element
        int mx = arr[n-1];

        st.push(-1);
        //traverse array from back
        //maitain the stack with the maximum element 
        for(int i = arr.size()-2;i>=0;i--)
        {
            st.push(mx);
            mx = max(arr[i], mx);
        }
        //now copy the stack elements into the ans array
         vector<int> ans;
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};