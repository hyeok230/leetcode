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
    TreeNode* makeTree(vector<int>& nums, int start, int end)
    {
        if (end + 1 - start < 1) return NULL;
        int mid = (start + end) / 2;
        
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = makeTree(nums, start, mid-1);
        root->right = makeTree(nums, mid+1, end);
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.size() == 0) return NULL;
        return makeTree(nums, 0, nums.size() - 1);
    }
};