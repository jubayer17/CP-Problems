// Author: Jubayer Ahmed
// 2025-10-10 23:05:12

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

    int n, cnt = 0, end, ans = INT_MIN;
    cin >> n;
    vector<int> vt;
    read(vt, n);
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            end = n - 1;
        }
        else
        {
            end = i - 1;
        }
        int x = i + 1;
        while (x != end)
        {
            if (x == 0)
            {
                if (vt[x] > vt[n - 1])
                {
                    cnt++;
                }
                continue;
            }
            if (vt[x] > vt[x - 1])
            {
                cnt++;
            }
        }
        ans = max(ans, cnt);
        cnt = 0;
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