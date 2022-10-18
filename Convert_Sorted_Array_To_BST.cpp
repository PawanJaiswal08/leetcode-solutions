class Solution {
public:
    TreeNode* solve(vector<int> &nums, int start, int end){
        //base case
        if(start > end){
            return NULL;
        }
        
        int mid = (start + end)/2;
        TreeNode* temp = new TreeNode(nums[mid]);
        
        temp -> left = solve(nums, start, mid-1);
        temp -> right = solve(nums, mid+1, end);
        return temp;
        }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return solve(nums, 0, nums.size()-1);    
    }
};