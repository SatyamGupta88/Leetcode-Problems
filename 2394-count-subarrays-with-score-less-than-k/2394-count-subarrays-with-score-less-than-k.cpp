class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) 
    {
        int n = nums.size();
        long long ans = 0;
        long long product=1;
        long long sum=0;
        int size=0;
        int i=0;
        for(int j=0;j<n;j++)
        {
            sum+=nums[j];
            size = j-i+1;
            product=(sum*size);

            while(product>=k)
            {
                sum-=nums[i];
                i++;
                size=j-i+1;
                product=(sum*size);
            }
            ans += j-i+1;
        }
        return ans; 
    }
};