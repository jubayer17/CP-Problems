// Author: Jubayer Ahmed
// 2025-10-15 14:23:49

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

signed main()
{
    fast_io;
    int t = 1;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        // lesgoooo

        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (b[i] < a[i])
            {

                cout << "Case #" << k << ": " << -1 << nl;
                return 0;
            }
        }

        vector<pair<int, int>> ans;

        for (int i = 0; i < n; i++)
        {

            if (b[i] > a[i])
            {
                for (int j = 0; j < n; j++)
                {

                    if (b[i] == a[j])
                    {
                        ans.push_back({i, j});
                    }
                }
            }
        }

        if (ans.size() == 0)
        {
            cout << "Case #" << k + 1 << ": " << 0 << nl;
        }
        else
        {
            cout << "Case #" << k << ": " << ans.size() << nl;
            for (auto &c : ans)
            {
                cout << c.first << " " << c.second << nl;
            }
        }
    }
    return 0;
}