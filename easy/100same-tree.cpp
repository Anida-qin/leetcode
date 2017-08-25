
// 解题思路

// 递归考点 （从底往上了，复杂）
// 1. 先判断结构，即两个树的左子树或右子树是否含都有节点。
// 2. 结构相同的情况下判断值是否相同

//1.它们的左子树一样
//2.它们的右子树一样
//3.它们的根节点一样



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
    bool isSameTree(TreeNode *p, TreeNode *q) {
        
        if(p==NULL && q==NULL) return true;
        
        if(p != NULL && q!=NULL)
        {
            bool l = isSameTree(p->left, q->left);
        	bool r = isSameTree(p->right, q->right);
            if(l && r)
        	{
                if(p->val == q->val) 
				{
					return true;
				}
                else 
				{
					return true;
				}
        	}
            else
            {
                return false;
            }
        }
        else 
            return false;
       
    }
};

//Solution 2
//两棵树一样的条件是
//1.它们的根节点一样
//2.它们的左子树一样
//3.它们的右子树一样
class Solution2 {
public:
    bool isSameTree(TreeNode *p, TreeNode *q) {
        
        if(p==NULL && q==NULL) return true;
        
        if(p != NULL && q!=NULL)
        {
            if(p->val == q->val)
            {
                bool l = isSameTree(p->left, q->left);
        		bool r = isSameTree(p->right, q->right);
                return (l&&r);
            }
            else
            {
                return false;
            }
         
        }
        else 
            return false;
       
    }
};