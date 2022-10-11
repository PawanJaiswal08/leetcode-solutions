//Approach :

/*We need to check if any strictly increasing sequence of size 3 present in the array.
For this, we can keep iterating the given array from left to right, and changing our FirstMinimumValue and SecondMinimumValue.
If any number comes, which is greater than SecondMinimumValue then this shows that, we have found a triplet with increasing subsequence. => return true.
If after whole iteration, above statement is not returning any answer, then this shows no increasing triplet present in the array. => return false at the end.*/



class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int FirstMinimumValue = INT_MAX,
        SecondMinimumValue = INT_MAX;
        if(nums.size()<3)
            return false;
        for(int& i : nums){
             //checking if there is any minimum value before firstminimum
            if(i <= FirstMinimumValue)
                
                FirstMinimumValue = i; // assign i to firstminimum
            
            else if(i <= SecondMinimumValue)  
                SecondMinimumValue = i;
          //  If any number comes, which is greater than SecondMinimumValue then this shows that, we have found a triplet with increasing subsequence. => return true.
            else   
                return true;
        }
        return false;
    }
};
