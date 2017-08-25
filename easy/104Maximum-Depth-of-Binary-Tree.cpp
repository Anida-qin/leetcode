// 解题思路

// 与111题求最小深度类似，但更简单。因为只要求最大分支即可。

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode *root) {
        if(root == NULL)
            return 0;
        int l = maxDepth(root->left);
        int r = maxDepth(root->right);
        return max(l,r)+1;
        
    }
};