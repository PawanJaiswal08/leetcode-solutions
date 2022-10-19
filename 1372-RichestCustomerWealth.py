class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        maxSum = 0
        for row in range(len(accounts)):
            runningSum = 0 
            for col in range(len(accounts[row])):
                 runningSum =runningSum+ accounts[row][col]
    
            if runningSum>maxSum:
                maxSum = runningSum
        return(maxSum)           
        
        