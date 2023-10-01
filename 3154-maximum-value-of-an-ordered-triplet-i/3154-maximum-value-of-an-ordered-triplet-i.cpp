class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) 
    {
        int n = nums.size();
        long  maxAns = 0;
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    long remain_Val = ((long)(nums[i]-nums[j])*(long)nums[k]);
                    if(remain_Val>maxAns) maxAns = remain_Val;
                }
            }
        }
        if(maxAns<0) return 0;
        else  return maxAns;
    }
};