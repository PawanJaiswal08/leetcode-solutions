// 392. Is Subsequence
#include<bits/stdc++.h>
using namespace std;

void solve(string &t, vector<string> &ans, int index, string &temp) {

    if(index == t.size()) {
        ans.push_back(temp);
        return;
    }

    // exclude
    solve(t, ans, index+1, temp);

    // inclusion
    temp.push_back(t[index]);
    solve(t, ans, index+1, temp);
    temp.pop_back();
}

bool isSubsequence(string s, string t) {

    vector<string> ans;
    string temp = "";

    solve(t, ans, 0, temp);
    
    for(int i=0; i<ans.size(); i++) {
        if(ans[i] == s) {
            return true;
        }
    }

    return false;
}

bool solve2(string s, string t, int i, int j) {

    if(i >= s.size())
        return true;

    if(i < s.size() && j >= t.size())
        return false;

    if(s[i] == t[j])
        return solve(s, t, i+1, j+1);
        
    else
        return solve(s, t, i, j+1);
}

bool isSubsequence1(string s, string t) {
    return solve2(s, t, 0, 0);
}
int main() {

    string s = "abc";
    string t = "ahbgdc";

    cout << isSubsequence(s, t);

    return 0;
}