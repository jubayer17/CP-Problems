// Author: Jubayer Ahmed
// 2025-07-31 21:12:08

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

    vector<int> S(n);
    for (int i = 0; i < n; i++)
    {
        cin >> S[i];
    }

    vector<int> freq(55, 0);
    for (int num : S)
    {
        freq[num]++;
    }

    int res = 0;
    int take = min(freq[0], freq[1]);
    res += take * 2;
    freq[0] -= take;
    freq[1] -= take;

    res += freq[0];
    freq[0] = 0;

    for (int i = 1; i < 55; i++)
    {
        res += i * freq[i];
    }

    cout << res << '\n';
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