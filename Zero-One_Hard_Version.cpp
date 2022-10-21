#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <cstring>
#include <time.h>
#include <chrono>
#include <random>
#include <ctime>
#include <cstring>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, arr) for (auto it = arr.begin(); it != arr.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
const int mod = 1e9 + 7;

void solve()
{
  ll n, x, y;
  cin >> n >> x >> y;
  string a, b;
  cin >> a >> b;
  vi temp;
  if(a==b) {
    cout<<"0\n";
    return;
  }
  for (int i = 0; i < n; i++)
    if (a[i] != b[i])
      temp.pb(i);
  int s = temp.size();
  if (s % 2 == 1)
  {
    cout << "-1\n";
    return;
  }
  if (s == 2 && temp[0] == (temp[1] - 1))
  {
    ll ans = x;
    if (n > 2)
      ans = min(ans, 2 * y);
    cout << ans << "\n";
    return;
  }
  if (x >= y)
  {
    cout << (s / 2) * y << "\n";
    return;
  }
  ll ans = 0;
  vl dp(s+1, 0);
  for(int i = 1; i<s; i++) {
    if(i%2==0) {
      dp[i+1] = min(dp[i-1] + min((temp[i]-temp[i-1])*x,y),dp[i]);
    } else {
      dp[i+1] = min(dp[i-1]+min((temp[i]-temp[i-1])*x,y),dp[i]+y);
    }
  }
  cout<<dp[s]<<"\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());
  int t;
  cin >> t;
  while (t--)
  {

    solve();
  }
  return 0;
}
