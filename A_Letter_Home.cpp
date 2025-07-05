// Author: Jubayer Ahmed
// 2025-06-20 20:40:05

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

    vector<int> vt(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vt[i];
    }
    if (n == 1)
    {
        cout << abs(vt[0] - k) << nl;
        return;
    }
    if (vt[0] <= k && vt[n - 1] >= k)
    {
        int x = abs(vt[0] - k);
        int y = abs(vt[n - 1] - k);
        cout << min(x, y) * 2 + max(x, y) << nl;
    }
    else if (vt[0] <= k)
    {

        cout << abs(vt[0] - k) << nl;
    }
    else
    {
        cout << abs(vt[n - 1] - k) << nl;
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