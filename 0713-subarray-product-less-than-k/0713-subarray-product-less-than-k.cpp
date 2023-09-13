class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        int n = nums.size();
        if(k<=1) return 0;
        int ans = 0;
        int i=0;
        long long product = 1;
        for(int j=0;j<n;j++)
        {
            product *=nums[j];
            //remove element from the strting of window size by performing /
            //in product case we can remove particular ele by performinng / with the product. 
            while(product>=k)
            {
                product/=nums[i];
                i++;
            }
            ans+=j-i+1;
        }    
        return ans;
    }
};