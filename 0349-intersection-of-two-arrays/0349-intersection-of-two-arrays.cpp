class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int>ans;
        unordered_map<int,int>mp;
        set<int>st;
        for(int i=0;i<nums1.size();i++) mp[nums1[i]]++;
        for(int i=0;i<nums2.size();i++)
        {
            if(mp[nums2[i]]) st.insert(nums2[i]);
        }
        for(auto x:st) ans.push_back(x);
        return ans;
    }
    
};