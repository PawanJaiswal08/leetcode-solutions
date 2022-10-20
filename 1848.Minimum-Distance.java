//https://leetcode.com/problems/minimum-distance-to-the-target-element/
class Solution {
    public int getMinDistance(int[] nums, int target, int start) {
        int ans = 0;
        ArrayList<Integer> solutions = new ArrayList<Integer>();
        for(int i=0; i<nums.length; i++){
            System.out.println(i);
            if(nums[i]==target){
                solutions.add(Math.abs(i-start));
            }
        }
        ans = solutions.get(0);
        for(int i=1; i<solutions.size(); i++){
            if(solutions.get(i)<ans){
                ans = solutions.get(i);
            }
        }
        return ans;
    }
}