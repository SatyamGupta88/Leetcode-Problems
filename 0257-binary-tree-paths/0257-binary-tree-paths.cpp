class Solution {
public:
    vector<string> ans;
    //base case
    void solve(TreeNode* root, string temp){
        if (root==NULL)
            return;
            //check both child have value or not 
        if(root->left==NULL && root->right==NULL)
        {
            temp=temp+to_string(root->val);
            ans.push_back(temp);
            return;
        }
        //add value every time to the answer
        temp+= to_string(root->val) + "->";
        //left call
        solve(root->left,temp);
        //right call
        solve(root->right,temp);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string temp="";
        solve(root,temp);
        return ans;
    }
};