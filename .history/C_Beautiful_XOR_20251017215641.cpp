// Author: Jubayer Ahmed
// 2025-10-17 21:56:15

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

    int a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0 << nl;
        return;
    }

    if (a == 0)
    { // constraints say a>=1 but be safe
        cout << -1 << nl;
        return;
    }

    int k = 63 - __builtin_clzll(a);
    int limit = ((1LL << (k + 1)) - 1);

    if (b > limit)
    {
        cout << -1 << nl;
        return;
    }

    int c = a ^ b;
    if (c <= a)
    {
        cout << 1 << nl;
        cout << c << nl;
        return;
    }

    int x1 = (a | b) ^ a;
    int a1 = a ^ x1;
    int x2 = a1 ^ b;

    cout << 2 << nl;
    cout << x1 << " " << x2 << nl;
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