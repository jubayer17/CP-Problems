// Author: Jubayer Ahmed
// 2025-10-23 22:50:02

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
    vector<int> a(n);
    vector<int> pref(n);
    read(a, n);
    pref[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = a[i] + pref[i - 1];
    }
    int ans = 0;
    for (int k = 1; k <= n; k++)
    {
        if (n % k)
            continue;
        int start = k - 1;
        int mxi = pref[start];
        int mni = pref[start];
        for (int idx = start + k; idx <= n; idx++)
        {
            int res = pref[idx] - pref[idx - k];
            mxi = max(mxi, res);
            mni = min(mxi, res);
        }
        ans = max(ans, mxi - mni);
    }

    cout << ans << nl;
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