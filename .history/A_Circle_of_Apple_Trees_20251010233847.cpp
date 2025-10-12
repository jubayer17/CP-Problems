// Author: Jubayer Ahmed
// 2025-10-10 23:20:18

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
    int n, end = -1, flag = 0, ans = 1;
    cin >> n;
    vector<int> a(n);
    read(a, n);

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
        int x, cnt = 0;
        if (i + 1 == n)
        {
            x = 0;
        }
        else
        {
            x = i + 1;
        }
        while (x != end)
        {

            if (x == 0)
            {

                if (a[x] > a[n - 1])
                {
                    cnt++;
                }
            }
            else
            {
                if (a[x] > a[x - 1])
                {
                    cnt++;
                }
            }

            if (x == n - 1)
            {
                x = 0;
            }
            else
            {
                x++;
            }
        }
        ans = max(ans, cnt);
        cnt = 0;
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