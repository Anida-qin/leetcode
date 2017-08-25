//解题思路(Leetcode 111)

// 递归求解
// 1. 叶子节点   -> 返回1
// 2. 左右有一个为空  -> 返回不为0的子树深度 + 1
// 3. 左右都不为空 ->  返回左右子树深度最小值 + 1





class Solution {
public:
    int run(TreeNode *root) {
        
        if(root == NULL) return 0;
        
        int l = run(root->left);
        int r = run(root->right);
        
        if(!l || !r) 
            return 1+l+r;   // 条件整合
        else 
            return min(l,r)+1;
    }
};