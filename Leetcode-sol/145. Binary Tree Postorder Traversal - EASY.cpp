//145. Binary Tree Postorder Traversal - EASY
//https://leetcode.com/problems/binary-tree-postorder-traversal/description/

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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans; // creating a vector for storing the result of traversal
        postorder(root,ans); // call helper function to perform in order traversal
        return ans; // Return result vector
    }
    
    void postorder(TreeNode* root , vector<int>& ans){

        // if it is not having a root value, return original value
        if(!root){
            return;
        }

        // if it does follow the following steps

        else

        // POSTORDER - left -> right -> root

        postorder(root->left,ans); // recursively visit the left subtree
                                  // NOTE: it is recursive, so it will find the bottom most left node and use that as the root node

        postorder(root->right,ans); // recursively visit the right subtree
                                   // NOTE: it is recursive, so it will find the bottom most right node and use that as the root node

        ans.push_back(root->val); // ans.push_back lets us store this value in 'ans'
                                  // val captures the value of the node so we can add it in ans
    }
};