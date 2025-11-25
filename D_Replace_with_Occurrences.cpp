// Author: Jubayer Ahmed
// 2025-11-13 22:50:43

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
    int n;
    cin >> n;
    map<int, vector<int>> grps;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        grps[x].push_back(i);
    }
    // for (auto &c : grps[2])
    // {
    //     cout << c << " ";
    // }
    // cout << nl;

    for (auto &[val, idxs] : grps)
    {
        if (idxs.size() % val != 0)
        {
            cout << -1 << nl;
            return;
        }
    }
    int cnt = 1;
    vector<int> ans(n);
    for (auto &[val, idxs] : grps)
    {
        for (int i = 0; i < idxs.size(); i++)
        {
            ans[idxs[i]] = cnt;
            if ((i + 1) % val == 0)
            {
                cnt++;
            }
        }
    }
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