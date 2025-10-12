// Author: Jubayer Ahmed
// 2025-09-09 19:43:57

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
    vector<int> vt;
    read(vt, n);
    sort(vt.begin(), vt.end());
    int q;
    cin >> q;
    while (q--)
    {
        int l, r, cnt = 0;
        cin >> l >> r;

        int low = 0, high = n - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (mid < l)
            {
                low = mid + 1;
            }
            else if (mid > r)
            {
                high = mid - 1;
            }
            else if (vt.find(vt[mid]) != vt.end())
            {
                cnt++;
            }
        }
        vt.push_back(cnt);
    }

    for (auto &c : vt)
    {
        cout << c << " ";
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