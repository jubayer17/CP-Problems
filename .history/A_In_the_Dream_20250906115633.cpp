// Author: Jubayer Ahmed
// 2025-09-06 11:46:24

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

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int mn1 = min(a, b), mx1 = max(a, b);
    if ((mn1 * 2) + 2 < mx1)
    {
        cout << "NO" << nl;
        return;
    }
    int x = a - c, y = b - d;
    int mn2 = min(x, y), mx2 = max(x, y);
    cout << mn1 << " " << mx1 << " " << mn2 << " " << mx2 << nl;
    if ((mn2 * 2) + 2 <= mx2)
    {
        cout << "NO" << nl;
        return;
    }

    cout << "YES" << nl;
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