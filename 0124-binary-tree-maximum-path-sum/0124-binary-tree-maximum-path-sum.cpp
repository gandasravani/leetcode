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
    int ans;
    int solve(TreeNode* root){
        if(root==NULL)
            return 0;
        int leftd=solve(root->left);
        int rightd=solve(root->right);
        int currmax=max(root->val,root->val+leftd);
        currmax=max(currmax,root->val+rightd);
        currmax=max(currmax,root->val+leftd+rightd);
        ans=max(ans,currmax);
        int res=max(root->val,root->val+leftd);
        res=max(res,root->val+rightd);
        return res;
    }
    int maxPathSum(TreeNode* root) {
        ans=INT_MIN;
        solve(root);
        return ans;
    }
};