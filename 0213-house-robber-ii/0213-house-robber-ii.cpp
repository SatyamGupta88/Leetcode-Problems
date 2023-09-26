class Solution {
public:
    int solve(int i,int lastIndex,vector<int>&arr,vector<int>&dp)
    {
        //base case
        if(i>lastIndex) return 0;
        //return if present in dp array
        if(dp[i]!=-1) return dp[i];
        //pick money from house
        int pick = arr[i] + solve(i+2,lastIndex,arr,dp);
        //not pick money from house
        int notP = 0 + solve(i+1,lastIndex,arr,dp);
        //return maximum of pick and non-pick
        return dp[i] = max(pick,notP);
    }
    int rob(vector<int>& nums) 
    {
        int n = nums.size();
        if(n==1) return nums[0];
        vector<int>dp(n,-1);
        // start from 0 to n-2 house
        int firstHouse = solve(0,n-2,nums,dp);
        // making dp array again -1 for next recursion call
        for(int i=0;i<n;i++) dp[i]=-1;
        //start from 1 to n-1th house 
        //return maximum of both
        int lastHouse = solve(1,n-1,nums,dp);
        return max(firstHouse,lastHouse);  
    }
};