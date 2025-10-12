// Author: Jubayer Ahmed
// 2025-09-18 13:36:06

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
    vector<int> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];

    for (int k = n; k >= 1; k--)
    {
        bool got = false;
        for (int s = 0; s + k - 1 < n; s++)
        {
            bool ok = true;
            for (int i = s; i < s + k; i++)
            {
                if (p[i] < 1)
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
            {
                for (int i = s; i < s + k; i++)
                    p[i]--;
                got = true;
                break;
            }
        }
        if (!got)
        {
            cout << "NO" << nl;
            return;
        }
    }

    cout << "YES" << nl;
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