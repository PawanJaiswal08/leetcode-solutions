// https://leetcode.com/problems/shuffle-string/

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string sol = s;
        for(int i=0; i<indices.size(); ++i) {
            sol[indices[i]] = s[i];
        }
        return sol;
    }
};
