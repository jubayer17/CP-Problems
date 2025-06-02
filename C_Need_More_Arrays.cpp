
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
        int boom;
        cin >> boom;
        int r = sqrt(boom);
        if (r * r == boom)
        {
            int a = r / 2;
            cout << a << ' ' << r - a << '\n';
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}