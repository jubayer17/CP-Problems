// Author: Jubayer Ahmed
// 2025-10-12 22:00:15

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
    vector<int> b(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> b[i];

    vector<int> a(n + 1), last(n + 1, 0);
    int nextNum = 1;

    for (int i = 1; i <= n; i++)
    {
        int diff = b[i] - b[i - 1];
        int prev = i - diff;

        if (prev == 0)
        {

            a[i] = nextNum;
            last[i] = nextNum;
            nextNum++;
        }
        else
        {

            a[i] = last[prev];
            last[i] = a[i];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << nl;
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