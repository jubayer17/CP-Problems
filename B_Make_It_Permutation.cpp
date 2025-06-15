// Author: Jubayer Ahmed
// 2025-06-12 21:37:40

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
    int n;
    cin >> n;

    vector<tuple<int, int, int>> vt;
    vt.emplace_back(1, 1, n);
    for (int i = 2; i <= n; i++)
    {
        int prf = (n - i) + 1;
        int suf = prf + 1;
        vt.emplace_back(i, 1, prf);
        if (suf <= n)
            vt.emplace_back(i, suf, n);
    }

    cout << vt.size() << nl;
    for (auto &[a, b, c] : vt)
    {
        cout << a << " " << b << " " << c << " ";
        cout << nl;
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