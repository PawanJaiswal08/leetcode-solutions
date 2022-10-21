// shree ganeshay namah
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
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int c = 0;
        vector<int> a(n);
        vector<int> b(n);
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        b[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            if(a[i]==0){
                b[i] = b[i-1] + a[i];
                continue;
            }
            if (b[i-1] - a[i] >= 0)
            {
                flag = 1;
                break;
            }
            else{
                b[i] = a[i] + b[i - 1];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (flag == 0)
            {
                cout << b[i] << " ";
            }
            else{
                cout << "-1";
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}