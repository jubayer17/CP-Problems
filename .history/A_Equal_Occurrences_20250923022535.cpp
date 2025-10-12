// Author: Jubayer Ahmed
// 2025-09-23 02:16:52

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
    vector<int> vt(n);
    read(vt, n);
    map<int, int> mt;
    for (int i = 0; i < n; i++)
    {
        mt[vt[i]]++;
    }
    int mx = INT_MIN;
    for (auto &a : mt)
    {
        int main = a.second;
        int cnt = 0;
        for (auto &c : mt)
        {
            if (c.second >= a.second)
            {
                cnt++;
            }
        }
        int res = cnt * main;
        if (res > mx)
        {
            mx = res;
        }
        }
    sort(ans.rbegin(), ans.rend());
    cout << ans[0] << nl;
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