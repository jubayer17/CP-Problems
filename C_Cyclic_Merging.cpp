// Author: Jubayer Ahmed
// 2025-11-16 21:56:19

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

void solve()
{
    int n;
    cin >> n;

    vector<int> a;
    read(a, n);

    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
    }

    int total = max(a[0], a[n - 1]);
    for (int i = 0; i < n - 1; i++)
    {
        int x = max(a[i], a[i + 1]);
        total += x;
    }
    cout << total - mx << nl;
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
