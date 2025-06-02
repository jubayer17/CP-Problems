// Author: Jubayer Ahmed
// 2025-05-27 23:00:46

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
    cin >> n;
    vector<pair<int, int>> vt;
    map<int, int> mpx, mpy;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        vt.push_back({x, y});
        mpx[x]++;
        mpy[y]++;
    }
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    int height = (((--mpx.end())->first) - (mpx.begin()->first)) + 1;
    int width = (((--mpy.end())->first) - (mpy.begin()->first)) + 1;
    int area = height * width;

    for (int i = 0; i < n; i++)
    {
        mpx[vt[i].first]--;
        mpy[vt[i].second]--;

        if (mpx[vt[i].first] == 0)
        {
            mpx.erase(vt[i].first);
        }
        if (mpy[vt[i].second] == 0)
        {
            mpy.erase(vt[i].second);
        }
        height = (((--mpx.end())->first) - (mpx.begin()->first)) + 1;
        width = (((--mpy.end())->first) - (mpy.begin()->first)) + 1;
        int cur = height * width;
        if (cur == n - 1)
        {
            int k = (height + 1) * width;
            int l = height * (width + 1);
            cur = min(k, l);
        }
        area = min(cur, area);
        mpx[vt[i].first]++;
        mpy[vt[i].second]++;
    }

    cout << area << nl;
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