// Author: Jubayer Ahmed
// 2025-11-16 18:48:43

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
    int x = a + b;
    if (a % 2 == 0 && b % 2 == 1)
    {
        cout << -1 << nl;
        return;
    }
    int ans = 0;
    if (b % 2 == 1)
    {
        ans = (a * b) + 1;
    }
    else
    {
        if (((b / 2) * a) % 2 == 0)
        {
            int last = b / 2;
            ans = (a * last) + 2;
        }
        else
        {
            cout << -1 << nl;
            return;
        }
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