class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int sum=INT_MIN;
        maxsum(root,sum);
        return sum;
        
    }
    
    int maxsum(TreeNode *root, int &sum)      // sum is being passed by reference so that we can use its value in maxPathSum.
    {
        if(root==NULL)    // Basic contition if root is null it will return null.
            return 0;
        
        int left=maxsum(root->left,sum);
        if(left<0)          
            left=0;                         // If left sub tree sum is less than zero we declare it as 0.
        int right=maxsum(root->right,sum);
        if(right<0)
            right=0;                        // If right sub tree sum is less than zero we declare it as 0.
        sum=max(sum,left+right+root->val);  // maximum of current sum and left+right+current node value will be updated to sum.
        return max(left,right)+root->val;   // it returns the maximum of left & right sub tree added with current node val.    
    }
};
