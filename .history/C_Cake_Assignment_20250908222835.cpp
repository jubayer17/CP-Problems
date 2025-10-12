// Author: Jubayer Ahmed
// 2025-09-08 21:59:44

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

    int k, x;
    cin >> k >> x;
    vector<int> cnt;
    int total = 1LL << (k + 1);
    int cocola = 1LL << k;
    // cout << cocola << " " << total << nl;
    if (x == cocola)
    {
        cout << 0 << nl;
    }

    int now = x;
    while (now != cocola)
    {
        if (now > cocola)
        {
            cnt.push_back(1);
            now = now * 2 - ttota
        }
        else
        {
            cnt.push_back(0);
            now = cocola - now;
        }
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