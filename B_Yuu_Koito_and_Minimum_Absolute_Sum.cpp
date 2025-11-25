// Author: Jubayer Ahmed
// 2025-11-20 22:19:14

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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] == -1)
            a[i] = 0;
    }

    if (a[0] == -1 && a[n - 1] == -1)
    {
        a[0] = a[n - 1] = 0;
    }
    else if (a[0] == -1)
    {
        a[0] = a[n - 1];
    }
    else if (a[n - 1] == -1)
    {
        a[n - 1] = a[0];
    }

    int sum = a[n - 1] - a[0];
    cout << abs(sum) << nl;
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << nl;
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