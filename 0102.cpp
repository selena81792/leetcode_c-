/*102. Binary Tree Level Order Traversal
Medium
12K
234
Companies
Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).
*/

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
    vector<vector<int>> result = {};

    void recursion(TreeNode* root, int level){
        if (root){
            if (level >= result.size()){
                vector<int> dummy = {};
                result.push_back(dummy);
            }
            result[level].push_back(root->val);
            recursion(root->left, level+1);
            recursion(root->right, level+1);
        }
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        recursion(root, 0);
        return result;
    }
};