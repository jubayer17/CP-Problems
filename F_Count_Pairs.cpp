// Author: Jubayer Ahmed
// 2025-11-13 19:17:22

#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long
#define nl '\n'

const int MAXK = 1000;
vector<int> pref;

void precompute()
{
    pref.assign(MAXK + 1, 0);
    int lim = (int)sqrt(MAXK);
    for (int x = -lim; x <= lim; ++x)
    {
        for (int y = -lim; y <= lim; ++y)
        {
            int s = x * x + y * y;
            if (s <= MAXK)
                pref[s]++;
        }
    }
    for (int i = 1; i <= MAXK; ++i)
        pref[i] += pref[i - 1];
}

void solve()
{
    int k;
    if (!(cin >> k))
    {
        cout << 0 << nl;
        return;
    }

    if (k < 0)
        cout << 0 << nl;
    else if (k > MAXK)
        cout << pref[MAXK] << nl;
    else
        cout << pref[k] << nl;
}

signed main()
{
    fast_io;
    precompute();
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
        solve();
    return 0;
}
