class Solution {
public:
    int maxArea(vector<int>& height) 
    { 
        int n=height.size();
        int left=0;
        int right=n-1;
        int maxamt=INT_MIN;
        
        while(left<=right)
        {
            if(height[left]<height[right])
            {
                maxamt=max(maxamt,height[left]*(right-left));
                left++;
                
            } 
            else if(height[left]==height[right])
            {
                maxamt=max(maxamt,height[left]*(right-left));
                left++;
                right--;
                
            } 
            else
            {
                maxamt=max(maxamt,height[right]*(right-left));
                right--;
            }
        }
        return maxamt;
    }
};
