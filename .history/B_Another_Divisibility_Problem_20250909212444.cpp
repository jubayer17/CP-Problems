// Author: Jubayer Ahmed
// 2025-09-09 21:08:06

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
int concat(int a, int b)
{
    int temp = b, mul = 1;
    while (temp > 0)
    {
        mul *= 10;
        temp /= 10;
    }
    return a * mul + b;
}

void solve()
{
    // lesgoooo

    int x, y, p;
    int temp = x;
    while (temp > 0)
    {
        temp /= 10;
        p *= 10;
    }
    p = p - 1;
    y = p - x;
    cin >> x;
    int num = concat()
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