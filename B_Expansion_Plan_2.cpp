// Author: Jubayer Ahmed
// 2025-11-23 15:47:22

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

    int n, x, y;
    cin >> n >> x >> y;
    x = abs(x), y = abs(y);

    string s;
    cin >> s;
    int c8 = 0, c4 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '8')
        {
            c8++;
        }
        else
        {
            c4++;
        }
    }
    int low = min(c8, min(x, y));
    int resx = x - low;
    int resy = y - low;
    int totalrest = resx + resy;
    int totalsupply = (c8 - low) + c4;
    if (totalsupply >= totalrest)
    {
        cout << "YES" << nl;
    }
    else
    {
        cout << "NO" << nl;
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