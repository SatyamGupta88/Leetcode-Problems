class Solution {
    public:
      vector<vector<int>>ans;
    void solve(int index,vector<int>&arr,vector<int>&ds,int target)
    {
        //base case
        if(index == arr.size())
        {
            if(target == 0)
            {
                ans.push_back(ds);
            }
            return;
        }
        //pick element and go to same index over and over again
        if(arr[index]<=target)
        {
            ds.push_back(arr[index]);
            solve(index,arr,ds,target-arr[index]);
            ds.pop_back();
        }
        //not pick/go to right side
        solve(index+1,arr,ds,target);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        int index = 0;
        solve(index,candidates,ds,target);
        return ans;
    }
};