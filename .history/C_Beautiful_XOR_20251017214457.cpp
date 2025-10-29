// Author: Jubayer Ahmed
// 2025-10-17 21:38:45

#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long
#define nl '\n'

void solve()
{
    int a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0 << nl;
        return;
    }

    if (a == 0)
    {
        // Can't pick any x > 0
        cout << -1 << nl;
        return;
    }

    int c = a ^ b;
    if (c <= a)
    {
        // 1 operation is enough
        cout << 1 << nl;
        cout << c << nl;
        return;
    }

    // 2 operations approach
    // Step 1: pick x1 = highest power of 2 <= a (or any x <= a)
    // Step 2: pick x2 = a ^ b ^ x1
    int x1 = 1;
    while ((x1 << 1) <= a)
        x1 <<= 1;
    int x2 = c ^ x1;

    cout << 2 << nl;
    cout << x1 << " " << x2 << nl;
}

signed main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
