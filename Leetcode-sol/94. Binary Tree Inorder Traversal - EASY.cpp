//94. Binary Tree Inorder Traversal - EASY
//https://leetcode.com/problems/binary-tree-inorder-traversal/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:

    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> ans; // creating a vector for storing the result of traversal
        inorder(root, ans); // call helper function to perform in order traversal
        return ans; // Return result vector
    }

    // function for inorder
    void inorder(TreeNode* root, vector<int>& ans) {
        if (!root)
            return; // if it is not having a root value, return original value

        // if it does follow the following steps
        inorder(root->left,ans);  // recursively visit the left subtree
                                  // NOTE: it is recursive, so it will find the bottom most left node and use that as the root node

        ans.push_back(root->val); // once done with bottom most left node,
                                  // ans.push_back lets us store this value in 'ans'
                                  // val captures the value of the node so we can add it in ans

        inorder(root->right,ans); // recursively visit the right subtree
    }
};
