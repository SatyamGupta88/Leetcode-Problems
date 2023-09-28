/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* solve(int low,int high,vector<int>&nums)
    {
        if(low>high) return nullptr;

        //extract maxiim value with index
        int maxVal = nums[low],idx=low;
        for(int i=low;i<=high;i++)
        {
            if(maxVal<nums[i])
            {
                maxVal = nums[i];
                idx = i;
            }
        }
        //create node with maximum values
        TreeNode* node = new TreeNode(maxVal);
        //split array into left and right half
        node->left = solve(low,idx-1,nums);
        node->right = solve(idx+1,high,nums);
        //return root of TREE
        return node;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) 
    {
        return solve(0,nums.size()-1,nums);
    }
};