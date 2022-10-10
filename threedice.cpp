#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll x, y, s;
        cin >> x >> y;
        s = x + y;
        if (s == 2)
        {
            cout << "0.666666\n";
        }
        else if (s == 3)
        {
            cout << "0.5\n";
        }
        else if (s == 4)
        {   
            cout << "0.333333\n";
        }
        else if (s == 5)
        {
            cout << "0.166666\n";
        }
        else
        {
            cout << "0\n";
        }
    }
    return 0;
}