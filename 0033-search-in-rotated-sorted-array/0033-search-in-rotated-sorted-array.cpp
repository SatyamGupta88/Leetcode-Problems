class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int n = nums.size();
        int st=0;
        int ed = n-1;
        while(st<=ed)
        {
            int mid = (st+ed)/2;
            if(nums[mid] == target) return mid;

            //check left part is sorted or not
            if(nums[st]<=nums[mid])
            {
            //now check either target is exist or not in this sorted array
                if(nums[st]<=target && target<=nums[mid]) ed = mid-1;
                else st = mid + 1;

            }
// if above condition is not true then below else block is execute i.e. right half is sorted and check for target in this half
            else
            {
//now check either target is exist or not in this sorted array
                if(nums[mid]<=target && target<=nums[ed]) st = mid+1;
                else ed = mid-1;
            }
        }
        return -1;
    }
};