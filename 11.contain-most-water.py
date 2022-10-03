def maxArea(height: list[int]) -> int:
    area = 0
    n = len(height) -1
    j = 0
    
    while j < n:
        w = n-j
        area = max(area, min(height[j], height[n])*w)
        if height[j] <= height[n]:
            j+=1
        else:
            n-=1
    return area
            