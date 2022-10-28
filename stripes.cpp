
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
        int   red = 0, ak = 0;
        string a[8];
        for (int i = 0; i < 8; i++)
        {
            cin >> a[i];
        }
        int flag = 0;
        for (int i = 0; i < 8; i++)
        {
            red = 0;
            for (int j = 0; j < 8; j++)
            {
                if (a[i][j] == 'R')
                    red++;
            }
            if (red == 8)
            {
                cout << "R" << endl;
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            for (int i = 0; i < 8; i++)
            {
                ak = 0;
                for (int j = 0; j < 8; j++)
                {
                    if (a[j][i] == 'B')
                        ak++;
                }
                if (ak == 8)
                {
                    cout << "B" << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
