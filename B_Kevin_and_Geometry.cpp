// Author: Jubayer Ahmed
// 2025-11-24 12:34:47

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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    vector<int> pairs;

    for (auto &c : mp)
    {
        if (c.second >= 2)
        {
            pairs.push_back(c.first);
        }
    }

    if (pairs.size() == 0)
    {
        cout << -1 << nl;
        return;
    }
    int L = pairs[0];
    vector<int> bases;
    int used = 2;
    for (auto &c : a)
    {
        if (c == L && used > 0)
        {
            used--;
            continue;
        }
        bases.push_back(c);
    }
    sort(bases.begin(), bases.end());
    for (int i = 0; i + 1 < bases.size(); i++)
    {
        int b1 = bases[i], b2 = bases[i + 1];
        if (abs(b1 - b2) < 2 * L)
        {
            cout << L << " " << L << " " << b1 << " " << b2 << nl;
            return;
        }
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