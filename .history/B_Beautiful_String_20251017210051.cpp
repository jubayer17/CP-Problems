// Author: Jubayer Ahmed
// 2025-10-17 20:45:17

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
    string s;
    cin >> n >> s;

    int total = 1 << n;
    for (int mask = 0; mask < total; ++mask)
    {
        string p = "";
        string x = "";
        vector<int> idx;
        for (int i = 0; i < n; ++i)
        {
            if (mask & (1 << i))
            {
                p.push_back(s[i]);
                idx.push_back(i + 1);
            }
            else
            {
                x.push_back(s[i]);
            }
        }

        bool okP = true;
        for (int i = 1; i < (int)p.size(); ++i)
        {
            if (p[i - 1] > p[i])
            {
                okP = false;
                break;
            }
        }
        if (!okP)
            continue;

        bool okX = true;
        for (int i = 0, j = (int)x.size() - 1; i < j; ++i, --j)
        {
            if (x[i] != x[j])
            {
                okX = false;
                break;
            }
        }
        if (!okX)
            continue;

        cout << (int)idx.size() << nl;
        if (!idx.empty())
        {
            for (int i = 0; i < (int)idx.size(); ++i)
            {
                if (i)
                    cout << ' ';
                cout << idx[i];
            }
        }
        cout << nl;
        return;
    }

    cout << -1 << nl;
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
