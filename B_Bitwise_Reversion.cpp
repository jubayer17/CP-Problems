// Author: Jubayer Ahmed
// 2025-10-11 01:27:30

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
    int x, y, z;
    cin >> x >> y >> z;

    bool possible = true;

    // check each bit independently
    for (int i = 0; i <= 30; i++)
    {
        int bx = (x >> i) & 1;
        int by = (y >> i) & 1;
        int bz = (z >> i) & 1;

        bool ok = false;

        for (int a = 0; a <= 1; a++)
        {
            for (int b = 0; b <= 1; b++)
            {
                for (int c = 0; c <= 1; c++)
                {
                    if ((a & b) == bx && (b & c) == by && (a & c) == bz)
                    {
                        ok = true;
                    }
                }
            }
        }

        if (!ok)
        {
            possible = false;
            break;
        }
    }

    cout << (possible ? "YES" : "NO") << nl;
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