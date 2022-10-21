//shree ganeshay namah
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi (3.141592653589)
#define mod 1000000007
#define ll long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> ma(m , vector<int> (2));
        unordered_map<int,int> mp;
        unordered_map<int,int> mq;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin>>ma[i][j];
                mp[ma[i][0]]++;
                mq[ma[i][1]]++;
            }
        }
        if(n == m)
        cout<<"NO"<<endl;
        else if(mp.size()==m && mp.size()==m)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}