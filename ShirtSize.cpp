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
        string a, b;
        cin >> a >> b;
        int n1 = a.length();
        int n2 = b.length();
        char x = a.at(n1 - 1);
        char y = b.at(n2 - 1);
        if (n1 == n2)
        {
            if (x == y)
            {
                cout << "=" << endl;
            }
            if ((x == 'M') && (y == 'S'))
            {
                cout << ">" << endl;
            }
            if ((x == 'S') && (y == 'M'))
            {
                cout << "<" << endl;
            }
            if ((x == 'L') && (y == 'S'))
            {
                cout << ">" << endl;
            }
            if ((x == 'S') && (y == 'L'))
            {
                cout << "<" << endl;
            }
            if ((x == 'L') && (y == 'M'))
            {
                cout << ">" << endl;
            }
            if ((x == 'M') && (y == 'L'))
            {
                cout << "<" << endl;
            }
        }
        if (n1 != n2)
        {
            if (x == y)
            {
                if ((x == 'L') && (n1 > n2))
                {
                    cout << ">" << endl;
                }
                if ((x == 'L') && (n2 > n1))
                {
                    cout << "<" << endl;
                }
                if ((x == 'S') && (n1 > n2))
                {
                    cout << "<" << endl;
                }
                if ((x == 'S') && (n2 > n1))
                {
                    cout << ">" << endl;
                }
            }
            if (x != y)
            {
                if ((x == 'M') && (y == 'S'))
                {
                    cout << ">" << endl;
                }
                if ((x == 'S') && (y == 'M'))
                {
                    cout << "<" << endl;
                }
                if ((x == 'L') && (y == 'S'))
                {
                    cout << ">" << endl;
                }
                if ((x == 'S') && (y == 'L'))
                {
                    cout << "<" << endl;
                }
                if ((x == 'L') && (y == 'M'))
                {
                    cout << ">" << endl;
                }
                if ((x == 'M') && (y == 'L'))
                {
                    cout << "<" << endl;
                }
            }
        }
    }
    return 0;
}
