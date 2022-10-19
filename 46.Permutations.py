
def permute(nums: list[int]) -> list[list[int]]:
    res = []
    if len(nums) == 1:
        return [nums]
    elif len(nums) == 2:
        return [[nums[0], nums[1]], [nums[1],nums[0]]]
    else:
        for i in range(len(nums)):
            tmp = nums.pop(i)
            n = permute(nums)
            res.extend(n)
            nums.insert(i, tmp)
            for j in range(len(n)):
                res[len(res)-1-j].insert(0,tmp)
            
    return res