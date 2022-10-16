class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        range_start = -1    
        range_end = -1    
        
        if (nums == None or len(nums) == 0):
            return [range_start, range_end]
        
        start = 0
        end = len(nums) - 1
        
        while start + 1 < end:
            mid = start + (end - start) // 2
            if nums[mid] < target:
                start = mid
            elif nums[mid] > target:
                end = mid
            else:
                start = mid
                
        if nums[end] == target:
            range_end = end
        elif nums[start] == target:
            range_end = start
            
        start = 0
        end = len(nums) - 1
        
        while start + 1 < end:
            mid = start + (end - start) // 2
            if nums[mid] < target:
                start = mid
            elif nums[mid] > target:
                end = mid
            else:
                end = mid
                
        if nums[start] == target:
            range_start = start
        elif nums[end] == target:
            range_start = end            
        
        return [range_start, range_end]
