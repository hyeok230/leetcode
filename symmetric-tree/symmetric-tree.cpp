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
    bool isSym(TreeNode* leftNode, TreeNode* rightNode)
    {
        if (leftNode == NULL)
        {
            if (rightNode == NULL)
                return true;
            return false;
        }
        if (rightNode == NULL)
            return false;
        
        if (leftNode->val != rightNode->val)
            return false;
        if (!isSym(leftNode->left, rightNode->right) || !isSym(leftNode->right, rightNode->left))
            return false;
        return true;
    }
    
    bool isSymmetric(TreeNode* root) {
        TreeNode* leftNode = root->left;
        TreeNode* rightNode = root->right;
        
        if (!isSym(leftNode,rightNode))
            return false;
        return true;
    }
};