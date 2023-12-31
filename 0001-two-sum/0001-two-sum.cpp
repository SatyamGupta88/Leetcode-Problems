class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(target-nums[i])!=mp.end())
            {
                int x = mp[target-nums[i]];
                ans.push_back(i);
                ans.push_back(x);
                break;
            }
            else
            {
                mp[nums[i]] = i;
            }
        }
        return ans;    
    }
};