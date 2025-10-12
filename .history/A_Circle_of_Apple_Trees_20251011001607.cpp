// Author: Jubayer Ahmed
// 2025-10-11 00:16:03

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
    vector<int> vt(n);
    read(vt, n);

    int ans = 0;

    for (int start = 0; start < n; start++)
    {
        int cnt = 0;
        int last = 0;                 // assume we haven’t eaten anything yet
        vector<bool> eaten(n, false); // track eaten apples
        bool changed = true;

        while (changed)
        { // loop until no more apples can be eaten
            changed = false;
            for (int i = 0; i < n; i++)
            {
                int idx = (start + i) % n;
                if (!eaten[idx] && vt[idx] > last)
                {
                    last = vt[idx];
                    eaten[idx] = true;
                    cnt++;
                    changed = true;
                }
            }
        }

        ans = max(ans, cnt);
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