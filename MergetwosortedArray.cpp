class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        if(n>m)
            return findMedianSortedArrays(nums2,nums1);
     
        int lo = 0;
        int high = n;
        while(lo<=high)
        {
            int mid = lo+(high-lo)/2;
            
            int mid2 = (n+m)/2 - mid;
            
            int l1 = mid==0?INT_MIN:nums1[mid-1];
            int r1 = mid==n?INT_MAX:nums1[mid];
            int l2 = mid2==0?INT_MIN:nums2[mid2-1];
            int r2 = mid2==n?INT_MAX:nums2[mid2];
            
            if(l1>r2)
            {
                high = mid-1;
            }
            else if(l2>r1)
            {
                lo = mid+1;
            }
            else if(l1<=r2 && l2<=r1)
            {
                return (n+m)%2 == 0? (double((max(l1,l2)+min(r1,r2))/2.0)) : min(r1,r2);
            }
        }
        
        return 0.0;
    }
};
