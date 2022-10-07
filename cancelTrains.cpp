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
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main()
{

  int t, n, m;
  cin >> t;
  while (t--)
  {
    cin >> n >> m;
    int a[n];
    int b[m];
    int c = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    for (int j = 0; j < m; j++)
    {
      cin >> b[j];
    }
    for (int k = 0; k < n; k++)
    {
      for (int p = 0; p < m; p++)
      {
        if (a[k] == b[p])
        {
          c++;
        }
      }
    }
    cout << c << endl;
  }
  return 0;
}
