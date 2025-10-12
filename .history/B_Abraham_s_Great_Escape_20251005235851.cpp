// Author: Jubayer Ahmed
// 2025-10-05 23:58:46

#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long
#define MOD 1000000007
#define INF 1e18
#define nl '\n'
#define pb push_back
#define ff first
#define ss second
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define print(v)          \
    for (auto x : v)      \
        cout << x << ' '; \
    cout << nl;
#define debug(x) cerr << #x << " = " << x << nl;

template <typename T>
void read(vector<T> &v, int n)
{
    v.resize(n);
    for (auto &x : v)
        cin >> x;
}
template <typename T>
void print_pair(const pair<T, T> &p) { cout << p.first << ' ' << p.second << nl; }

void solve()
{
    // lesgoooo

    int n, k;
    cin >> n >> k;
    int all = n * n;
    if (k == all - 1)
    {
        cout << "NO" << nl;
        return;
    }
    cout << "YES" << nl;

    vector<string> st(n, string(n, '.'));
    int full = k / n;
    int res = k % n;

    for (int i = 0; i < full; i++)
        for (int j = 0; j < n; j++)
            st[i][j] = 'U';

    if (full < n)
        for (int j = 0; j < res; j++)
            st[full][j] = 'U';

    for (int r = 0; r < n; ++r)
    {
        for (int c = 0; c < n; ++c)
        {
            if (st[r][c] != '.')
                continue;

            if (c + 1 < n && st[r][c + 1] == '.')
            {
                st[r][c] = 'R';
                st[r][c + 1] = 'L';
            }
            else
            {
                st[r][c] = 'D';
                st[r + 1][c] = 'U';
            }
        }
    }

    for (int r = 0; r < n; ++r)
        cout << st[r] << nl;
}

signed main()
{
    fast_io;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}