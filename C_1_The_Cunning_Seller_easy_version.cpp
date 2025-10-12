// Author: Jubayer Ahmed
// 2025-08-24 00:37:52

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
int ipow(int a, int b)
{
    int res = 1;
    while (b--)
    {
        if (res > LLONG_MAX / a)
            return LLONG_MAX;
        res *= a;
    }
    return res;
}

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    while (n > 0)
    {
        int base = 0, power = 1;
        while (power * 3 <= n)
        {
            power *= 3;
            base++;
        }
        int full_deals = n / power;
        int rem = n % power;
        int cost_one_deal = ipow(3, base + 1) + (base ? base * ipow(3, base - 1) : 0);
        ans += full_deals * cost_one_deal;
        n = rem;
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