#include<bits/stdc++.h>
using namespace std;


    //this functon returns all the pairs of answers present
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    arr.push_back(i);
                    arr.push_back(j);
                }
            }
        }
        return arr;
    }                                                                                                                    

    //this function returns only one pair of answer
     vector<int> twoSum2(vector<int>& nums, int target) {
        vector<int> ans; 
        unordered_map<int, int> mpp; 
        for(int i = 0;i<nums.size();i++) {
    //map.find() reutns an iterator to the position of the key if present otherwise returns end
            if(mpp.find(target - nums[i]) != mpp.end()) {
                ans.push_back(mpp[target-nums[i]]); 
                ans.push_back(i); 
                return ans; 
            }
            mpp[nums[i]] = i; 
        }
        return ans; 
     }

int main(){
    vector<int> arr={7,5,1,2,-1,7};
    vector<int> arr1=twoSum(arr,9);
    vector<int> arr2=twoSum2(arr,9);
    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<arr2.size();i++){
        cout<<arr1[i]<<" ";
    }
}