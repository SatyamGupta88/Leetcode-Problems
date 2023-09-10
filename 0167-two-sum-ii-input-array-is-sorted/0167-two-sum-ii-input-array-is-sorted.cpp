class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) 
    {
        int n = nums.size();
        int st=0;
        int ed =n-1;
        
        while(st<=ed)
        {
            int sum = nums[st]+nums[ed];
            if(sum==k)
            {
                return{st+1,ed+1};
            }
            else if(sum<k) st++;
            else ed--;
        }
        return {0,0};
    }
};