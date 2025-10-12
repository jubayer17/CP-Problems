// Author: Jubayer Ahmed
// 2025-10-05 23:34:32

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
    int total = n * n;

      if (k == total - 1)
    {
        cout << "NO" << nl;
        return;
    }

    cout << "YES" << nl;

    vector<string> grid(n, string(n, 'L'));

    int placed = 0;
    for (int i = 0; i < n && placed < k; i++)
    {
        for (int j = 0; j < n && placed < k; j++)
        {
            if (i % 2 == 0)
            {
                grid[i][j] = 'U';
                placed++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 'L' && j + 1 < n)
            {
                grid[i][j] = 'R';
                grid[i][j + 1] = 'L';
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << grid[i] << nl;
    }
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