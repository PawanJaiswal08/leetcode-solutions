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

int solve(string a, int i){
    if(i==a.length())
    return 0;
    int ak = (solve(a,i+1)+1)%998244353;
    int c=0;
    int akg=0;
    if(i<a.length()-1){
        if(a[i]==a[i+1]){
            c=1;
        }
        else
        c=2;
        akg=(solve(a,i+2)+c)%998244353;
    }
    return ak+akg;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        cout<<(solve(a,0))/(a.length())<<endl;
    }
    return 0;
}
