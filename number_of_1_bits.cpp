class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        uint32_t temp = n;
        unsigned int count = 0;
        while (n)
        {
            count += (n & 1);
            n >>= 1;
        }
        return count;
    }
};

// author:Chinmay Lohani
// date:9-3-2022
// problemName:A. Deletions of Two Adjacent Letters
// problemLink:https://codeforces.com/contest/1650/problem/A
// memoryLimit: 256
// timeLimit:2000

#include <bits/stdc++.h>

using namespace std;

#define mod 998244353
#define lli long long int
#define ll long long
#define li long int
#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0)

uint32_t solve();
int main()
{
    FastIO;
    ll tc;
    cin >> tc;
    while (tc--)
    {
        cout << solve();
    }
    return 0;
}
uint32_t solve()
{
    uint32_t n;
    cin >> n;
    uint32_t temp = n;
    unsigned int count = 0;
    while (n)
    {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}