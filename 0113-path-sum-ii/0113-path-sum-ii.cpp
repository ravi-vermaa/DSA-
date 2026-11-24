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
    void dfs(TreeNode* root, int targetSum,
             vector<int>& path,
             vector<vector<int>>& ans) {

        if (root == nullptr)
            return;

        path.push_back(root->val);
        targetSum -= root->val;

        // Check if leaf and sum matches
        if (root->left == nullptr &&
            root->right == nullptr &&
            targetSum == 0) {
            ans.push_back(path);
        }

        dfs(root->left, targetSum, path, ans);
        dfs(root->right, targetSum, path, ans);

        // Backtracking
        path.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root,
                                int targetSum) {
        vector<vector<int>> ans;
        vector<int> path;

        dfs(root, targetSum, path, ans);

        return ans;
    }
};
