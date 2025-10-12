// Author: Jubayer Ahmed
// 2025-07-27 20:41:18

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
    int n, c;
    cin >> n >> c;
    vector<int> vt(n), under;
    for (int i = 0; i < n; i++)
    {
        cin >> vt[i];
        if (vt[i] <= c)
        {
            under.push_back(vt[i]);
        }
    }
    sort(under.begin(), under.end(), greater<int>());
    int cnt = 0, ans = 0, mul = 1;
    for (int i = 0; i < under.size(); i++)
    {
        if (under[i] * mul <= c)
        {
            ans++;
            mul *= 2;
            // cout << under[i] << " ";
        }
    }
    // cout << nl;

    // cout << nl;

    // for (auto x : under)
    // {
    //     cout << x << " ";
    // }
    // cout << nl;

    cout << n - ans << nl;
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