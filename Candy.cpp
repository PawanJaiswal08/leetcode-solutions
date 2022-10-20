class Solution {
public:
    int candy(vector<int>& ratings) {
        int n= ratings.size();
        
        int ans = 0;
        
        //students who get more candies than its left neighbour
        vector<int>L_candy(n,1);
        for(int i=1; i<n; i++){
            if(ratings[i]>ratings[i-1] )
                L_candy[i]=L_candy[i-1]+1;
        }
        
        //student who get more candies than its right neighbour
        vector<int> R_candy(n,1);
        for(int i=n-2; i>=0; i--){
            if(ratings[i]>ratings[i+1] )
                R_candy[i] = R_candy[i+1]+1;
        }
        
        // maximum which staisfy bothe left and right neighbour
        for(int i=0; i<n; i++){
            ans += max(L_candy[i], R_candy[i]);
        }
        return ans;
    }
};
