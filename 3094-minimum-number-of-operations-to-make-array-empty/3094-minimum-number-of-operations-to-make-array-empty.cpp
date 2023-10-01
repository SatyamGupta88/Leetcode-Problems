class Solution {
public:
    int minOperations(vector<int>& nums) 
    {
        int n=nums.size();
        int ansCount=0;
        unordered_map<int,int>mp;
        for(auto x:nums) mp[x]++;
        
        for(auto x:mp)
        {
            if(x.second == 1) return -1;
            if(x.second%3==0) ansCount+=(x.second/3);
            else
            {
                if(x.second%3==1 || x.second%3==2) ansCount+=(x.second/3)+1;
            }
        }
        return ansCount;
    }
};