// Author: Jubayer Ahmed
// 2025-06-16 00:26:48

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

    int k, a, b, x, y, sum1 = 0, sum2 = 0;
    cin >> k >> a >> b >> x >> y;
    if (y > x)
    {
        swap(x, y);
        swap(a, b);
    }

    int res = (k - b) + 1;
    sum1 = res / y;

    if (b > a)
    {

        int res1 = b - a;
        sum2 = res1 / x;
        if (res1 % x != 0)
        {
            sum2++;
        }
    }

    if (sum1 + sum2 < 0)
    {
        cout << 0 << nl;
        return;
    }

    cout << sum1 + sum2 << nl;
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