// Author: Jubayer Ahmed
// 2025-11-02 18:12:31

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
    int n, k, x;
    cin >> n >> k >> x;

    if (x != 1)
    {
        yes;
        cout << n << nl;
        rep(i, 0, n) cout << 1 << " ";
        cout << nl;
        return;
    }

    if (k == 1)
    {
        no;
        return;
    }

    if (k == 2 && n % 2 == 1)
    {
        no;
        return;
    }

    yes;
    if (n % 2 == 0)
    {
        cout << n / 2 << nl;
        rep(i, 0, n / 2) cout << 2 << " ";
        cout << nl;
    }
    else
    {
        cout << (n - 3) / 2 + 1 << nl;
        cout << 3 << " ";
        rep(i, 0, (n - 3) / 2) cout << 2 << " ";
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