/*589. N-ary Tree Preorder Traversal
Easy
2.6K
126
Companies
Given the root of an n-ary tree, return the preorder traversal of its nodes' values.

Nary-Tree input serialization is represented in their level order traversal. Each group of children is separated by the null value (See examples)
 */

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> result = {};

    void recursion(Node *root){
        if (root){
            result.push_back(root->val);
            for (Node *it : root->children){
                recursion(it);
            }
        }
    }

    vector<int> preorder(Node *root) {
        recursion(root);
        return result;
    }
};