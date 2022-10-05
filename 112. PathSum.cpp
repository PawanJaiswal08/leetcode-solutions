// https://leetcode.com/problems/path-sum
// 98% efficient solution

class Solution {
public:
    int pathSum = 0; 
    bool pathFound = false;
    
    bool hasPathSum(TreeNode* root, int targetSum) 
    {                
        if(root != NULL)
        {
            pathSum += root->val;
            
            if(root->left == NULL && root->right == NULL)
            {
                if(pathSum == targetSum)
                    pathFound = true;
            }
            else
            {
                hasPathSum(root->left, targetSum);
                hasPathSum(root->right, targetSum);
            }
            
            pathSum -= root->val;    
        }

        return (pathFound == true) ? true : false;
     }
};
