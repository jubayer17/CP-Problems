// Author: Jubayer Ahmed
// 2025-10-05 23:14:41 (improved)
// Problem: Abraham's Great Escape - constructive correct solution

#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long
#define nl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;
    int total = n * n;

    // impossible case
    if (k == total - 1)
    {
        cout << "NO" << nl;
        return;
    }

    cout << "YES" << nl;

    // '.' = unassigned. We'll put 'U' for escaping cells and pair the rest.
    vector<string> g(n, string(n, '.'));

    int full = k / n; // number of full rows of 'U'
    int rem = k % n;  // extra 'U' in the next row (leftmost rem cells)

    // Fill first 'full' rows with 'U'
    for (int r = 0; r < full; ++r)
        for (int c = 0; c < n; ++c)
            g[r][c] = 'U';

    // Fill rem cells in row 'full' if full < n
    if (full < n)
    {
        for (int c = 0; c < rem; ++c)
            g[full][c] = 'U';
    }

    auto inside = [&](int r, int c)
    { return r >= 0 && r < n && c >= 0 && c < n; };

    // Pair remaining '.' cells into 2-cycles so they don't escape.
    // Prefer right neighbor, else down neighbor (scan row-major).
    for (int r = 0; r < n; ++r)
    {
        for (int c = 0; c < n; ++c)
        {
            if (g[r][c] != '.')
                continue;

            bool paired = false;
            // try right
            if (!paired && inside(r, c + 1) && g[r][c + 1] == '.')
            {
                g[r][c] = 'R';
                g[r][c + 1] = 'L';
                paired = true;
            }
            // try down
            if (!paired && inside(r + 1, c) && g[r + 1][c] == '.')
            {
                g[r][c] = 'D';
                g[r + 1][c] = 'U';
                paired = true;
            }
            // try left (rare; only if right/down not possible and left free)
            if (!paired && inside(r, c - 1) && g[r][c - 1] == '.')
            {
                g[r][c] = 'L';
                g[r][c - 1] = 'R';
                paired = true;
            }
            // try up
            if (!paired && inside(r - 1, c) && g[r - 1][c] == '.')
            {
                g[r][c] = 'U';
                g[r - 1][c] = 'D';
                paired = true;
            }

            // fallback (shouldn't be needed because impossible case excluded),
            // but assign something deterministic so we never leave '.'
            if (!paired)
                g[r][c] = 'L';
        }
    }

    // output
    for (int r = 0; r < n; ++r)
    {
        cout << g[r] << nl;
    }
}

signed main()
{
    fast_io;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
