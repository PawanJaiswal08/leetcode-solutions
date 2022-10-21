#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pi (3.141592653589)
#define mod 1000000007
#define ll long long
#define float double
#define pb push_back
#define mp make_pair
#define ss second
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

typedef vector<int> vi;
typedef vector<pair<int, int>> vpi;
typedef vector<ll> vl;
#define all(aa) aa.begin(), aa.end()
#define pb push_back

#define ff                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define t          \
    int test_cases;    \
    cin >> test_cases; \
    while (test_cases--)


int main()
{
    ff

    t{
        ll n, anurag = 0;
        cin >> n;
        vl aa, aa1, mohit;
        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;

            if (i % 2 == 0){ 
            aa.pb(a);
            }
            else{
                aa1.pb(a);
            }
            
        }

        sort(all(aa), greater<ll>());
        sort(all(aa1));

        ll a = 0, b = 0;
        for (ll i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                mohit.pb(aa[a]);
                a++;
            }
            else
            {
                mohit.pb(aa1[b]);
                b++;
            }
        }

        if (aa1.size() > 1) 
        for (ll i = aa1.size() - 2; i >= 0; i--) 
        {
            aa1[i] += aa1[i + 1];
        }
            
        for (ll i = 0; i < aa.size() && i < aa1.size(); i++) 
        {
            anurag += aa[i] * aa1[i];
        }

        for (auto i : mohit) 
        cout << i << " ";
        
        cout << "\n" << anurag << "\n";
    }
    return 0;
}