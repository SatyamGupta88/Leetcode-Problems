class Solution {
public:
    vector<vector<int>> ansSubsets;
    void solve(int i,vector<int> &nums,vector<int>&temp)
    {
        if(i>=nums.size())
        {
            ansSubsets.push_back(temp);
            return;
        }
        //pick elments into the temp array
        temp.push_back(nums[i]);
        solve(i+1,nums,temp);
        //not pick or remove elements from temp array
        temp.pop_back();
        solve(i+1,nums,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<int>temp;
        solve(0,nums,temp);
        return ansSubsets;
    }
};