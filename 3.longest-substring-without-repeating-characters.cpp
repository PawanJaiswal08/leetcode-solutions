// 3. Longest Substring Without Repeating Characters
#include<bits/stdc++.h>
using namespace std;

// Approach 1 O(2n)
int uniqueSubstrings1(string s){
    // int ans = 0;
    // int maxi = 0;
    int i = 0, j = 0, n = s.size(), ans = 0;
    set<char> charSet;

    while(i<n && j<n){
        //If the character does not in the set
        if(charSet.find(s[j]) == charSet.end()){
            charSet.insert(s[j++]);  //If the character does not in the set
            ans = max(ans, j-i);  //Check if the new distance is longer than the current answer
        }

        else{
            charSet.erase(s[i++]);
        }
    }
    return ans;
}

// Approach 2 O(n)
// int uniqueSubstrings(string s){
//     // int ans = 0;
//     // int maxi = 0;
//     int left = 0, right = 0, n = s.size(), ans = 0;
//     unordered_map<char, int> map;

//     while(left<n && right<n){
//         //If the character does not in the set
//         if(map.find(s[right]) == map.end()){
//             map[s[right++]] = right;  //If the character does not in the set
//             ans = max(ans, right-left);  //Check if the new distance is longer than the current answer
//         }

//         else{
//             left = max()
//             map.erase(s[left++]);
//         }
//     }
//     return ans;
// }

int main(){
    string s = "dvdf";
    cout << uniqueSubstrings1(s);
    return 0;
}