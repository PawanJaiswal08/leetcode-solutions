#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x1;
    cin >> x1;
    while (x1--)
    {
        int x;
        cin >> x;
        if (x == 3)
            cout << "-1" << endl;
        else
        {
            if (x % 2)
            {
                int kas = (x / 2) + 1;
                for (int j = x; j > kas; j--)
                {
                    cout << i << " ";
                }
                for (int j = 1; j <= kas; j++)
                {
                    cout << j << " ";
                }
                cout << endl;
            }
            else
            {
                for (int k = x; k >= 1; k--)
                {
                    cout << k << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}