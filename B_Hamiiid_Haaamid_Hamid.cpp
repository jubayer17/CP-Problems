// Author: Jubayer Ahmed
// 2025-11-08 01:28:31

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

    int n, pos;
    cin >> n >> pos;
    string s;
    cin >> s;

    if (pos == 1 || pos == n)
    {
        cout << 1 << nl;
        return;
    }

    pos--;

    int lf = -1, rg = n;
    for (int i = pos - 1; i >= 0; i--)
        if (s[i] == '#')
        {
            lf = i;
            break;
        }
    for (int i = pos + 1; i < n; i++)
        if (s[i] == '#')
        {
            rg = i;
            break;
        }

    if (lf == -1 && rg == n)
    {
        cout << 1 << nl;
        return;
    }

    int leftCand = min(pos + 1, n - rg + 1);
    int rightCand = min(lf + 2, n - pos);
    cout << max(leftCand, rightCand) << nl;
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