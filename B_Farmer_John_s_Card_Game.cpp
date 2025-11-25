// Author: Jubayer Ahmed
// 2025-11-24 19:45:52

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
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> vt;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            vt.push_back({x, i + 1});
        }
    }
    sort(vt.begin(), vt.end());
    vector<int> visited(n, -1);
    for (int i = 0; i < n * m; i++)
    {
        int pos = i % n;
        int cow = vt[i].second;
        if (visited[pos] == -1)
        {
            visited[pos] = cow;
        }
        else if (visited[pos] != cow)
        {
            cout << -1 << nl;
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << visited[i] << " ";
    }
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