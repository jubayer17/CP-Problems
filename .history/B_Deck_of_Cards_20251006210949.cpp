// Author: Jubayer Ahmed
// 2025-10-06 21:09:38

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

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for (char c : s)
    {
        if (c == '0')
            cnt0++;
        else if (c == '1')
            cnt1++;
        else
            cnt2++;
    }

    int Lmin = cnt0;
    int Lmax = cnt0 + cnt2;
    int remain = n - k;

    string ans(n, '-');

    if (remain > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i >= 1 + Lmax && i <= Lmin + remain)
                ans[i - 1] = '+';
            else if (i < 1 + Lmin || i > Lmax + remain)
                ans[i - 1] = '-';
            else
                ans[i - 1] = '?';
        }
    }

    cout << ans << "\n";
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