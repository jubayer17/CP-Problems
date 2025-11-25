// Author: Jubayer Ahmed
// 2025-11-23 21:04:12

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
    string s;
    cin >> s;
    vector<int> a(n, -1);

    for (int i = 0; i < n; i++)
    {

        a[i] = i + 1;
    }
    if ((s[0] == '0' && s[1] == '1') || (s[n - 2] == '1' && s[n - 1] == '0'))
    {
        cout << "NO" << nl;
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '0' && s[i] == s[i + 1])
        {

            swap(a[i], a[i + 1]);
        }
        else if (s[i] == '0' && (s[i] != s[i + 1] && s[i] != s[i - 1]))
        {
            cout << "NO" << nl;
            return;
        }
    }
    cout << "YES" << nl;
    print(a);
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