class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) 
    {
        int n = nums.size();
        unordered_map<int,int> mp;
        mp[0]=-1;
        int prefix_sum=0;
        for(int i=0;i<n;i++)
        {
            prefix_sum+=nums[i];
            prefix_sum %=k;
            if(mp.find(prefix_sum)!=mp.end())
            {
                if(i-mp[prefix_sum]>1) return true;
            }
            else mp[prefix_sum]=i;
        }    
        return false;
    }
};