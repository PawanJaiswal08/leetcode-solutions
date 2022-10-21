class Solution {
public:
    bool canCross(vector<int>& stones) {
        unordered_map<int, set<int>> m;
        // vector<vector<long long>> v;
        int n = stones.size();
        if(n==2 && stones[1]-stones[0]==1) return true;
        else if(n==2 || (stones[1]-stones[0]!=1)) return false;
        m[stones[1]].insert(1);
        // cout<<n<<"\n";
        for(int i = 1; i<n-1; i++) {
            // cout<<"i size "<<i<<" "<<m[stones[i]].size()<<"\n";
            if(m[stones[i]].size()>0) {
                for(auto j : m[stones[i]]) {
                    // if(i==7) cout<<j<<" ";
                    for(int k = -1; k<2; k++) {
                        m[stones[i]+j+k].insert(j+k);
                    }
                }
            }
        }
        
        if(m[stones[n-1]].size()>0) return true;
        return false;
    }
};
