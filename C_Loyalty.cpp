// Author: Jubayer Ahmed
// 2025-11-13 13:07:21

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
    int n, x;
    cin >> n >> x;
    vector<int> vt(n), ans;
    read(vt, n);
    sort(vt.begin(), vt.end());
    int p1 = 0, p2 = n - 1;
    int loyalty = 0, res = 0, front = 0, demo = 0;
    while (p1 <= p2)
    {
        if ((vt[p2] + demo) / x > loyalty)
        {

            loyalty = floor((vt[p2] + demo) / x);
            demo += vt[p2];
            ans.push_back(vt[p2]);
            res += vt[p2];
            p2--;

            continue;
        }
        else if ((vt[p2] + front + demo) / x > loyalty)
        {
            loyalty = floor((vt[p2] + front + demo) / x);
            demo += front + vt[p2];
            front = 0;
            ans.push_back(vt[p2]);
            res += vt[p2];
            p2--;
            continue;
        }
        else
        {
            ans.push_back(vt[p1]);
            front += vt[p1];
            p1++;
        }
    }
    cout << res << nl;
    print(ans);
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