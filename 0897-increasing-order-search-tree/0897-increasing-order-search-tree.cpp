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
    TreeNode* curr;

    void inorder(TreeNode* root) {
        if (root == nullptr) {
            return;
        }

        // Visit left subtree
        inorder(root->left);

        // Remove left connection
        root->left = nullptr;

        // Connect previous node to current node
        curr->right = root;
        curr = root;

        // Visit right subtree
        inorder(root->right);
    }

    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* dummy = new TreeNode(0);
        curr = dummy;

        inorder(root);

        return dummy->right;
    }
};
