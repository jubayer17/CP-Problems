// Author: Jubayer Ahmed
// 2025-10-06 00:23:04

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
    if (n == 2)
    {
        if (k == 3)
        {
            cout << "NO" << nl;
            return;
        }
        cout << "YES" << nl;
        if (k == 4)
        {
            cout << "UU" << nl << "UU" << nl;
            return;
        }
        if (k == 2)
        {
            cout << "UU" << nl << "RL" << nl;
            return;
        }
        if (k == 1)
        {
            cout << "UD" << nl << "RU" << nl;
            return;
        }
        if (k == 0)
        {
            cout << "DD" << nl << "UU" << nl;
            return;
        }
    }

    cout << "YES" << nl;
    vector<string> st(n, string(n, '.'));
    int placed = 0;
    for (int i = 0; i < n && placed < k; ++i)
    {
        for (int j = 0; j < n && placed < k; ++j)
        {
            st[i][j] = 'U';
            ++placed;
        }
    }

    for (int r = 0; r < n; ++r)
    {
        int c = 0;
        while (c < n)
        {
            if (st[r][c] != '.')
            {
                ++c;
                continue;
            }
            if (c + 1 < n && st[r][c + 1] == '.')
            {
                st[r][c] = 'R';
                st[r][c + 1] = 'L';
                c += 2;
            }
            else if (r + 1 < n && st[r + 1][c] == '.')
            {
                st[r][c] = 'D';
                st[r + 1][c] = 'U';
                c += 1;
            }
            else if (c - 1 >= 0 && st[r][c - 1] == '.')
            {
                st[r][c] = 'L';
                st[r][c - 1] = 'R';
                c += 1;
            }
            else if (r - 1 >= 0 && st[r - 1][c] == '.')
            {
                st[r][c] = 'U';
                st[r - 1][c] = 'D';
                c += 1;
            }
            else
            {
                st[r][c] = 'L';
                c += 1;
            }
        }
    }

    for (int i = 0; i < n; ++i)
        cout << st[i] << nl;
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