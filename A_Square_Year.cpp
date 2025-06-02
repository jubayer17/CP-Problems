
#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

signed main()
{
    fast_io;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int z = 0, o = 0;
        for (char ch : s)
            (ch == '0') ? z++ : o++;

        int m = n / 2, mis = m - k;
        if (mis < 0 || z < mis || o < mis)
        {
            cout << "NO\n";
            return;
        }

        z -= mis;
        o -= mis;

        if (z % 2 || o % 2)
        {
            cout << "NO\n";
        }
        else if ((z + o) / 2 == k)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}