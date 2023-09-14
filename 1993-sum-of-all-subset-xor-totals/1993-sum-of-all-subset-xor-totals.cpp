class Solution {
public:
    int xorsum = 0;
    void solve(int i,int sum,vector<int>&nums)
    {
        if(i>=nums.size())
        {
            xorsum+=sum;
            return;
        }
        //in pick times do xor
        solve(i+1,sum^nums[i],nums);
        solve(i+1,sum,nums);
    }
    int subsetXORSum(vector<int>& nums) 
    {
        int sum=0;
        solve(0,sum,nums);
        return xorsum;    
    }
};