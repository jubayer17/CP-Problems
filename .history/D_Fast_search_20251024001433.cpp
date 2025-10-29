// Author: Jubayer Ahmed
// 2025-10-24 00:02:38

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
    read(a, n);
    sort(a.begin(), a.end());
    int q;
    cin >> q;
    int l, r;
    while (q--)
    {
        int low, high, ans = 0;
        cin >> l >> r;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == l)
            {
                low = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == r)
            {
                high = r;
                break;
            }
        }

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int num = a[mid];
            if (num < l)
            {
                low++;
                continue;
            }
            else if (num > r)
            {
                high--;
                continue;
            }
            int cnt = count(a.begin(), a.end(), num);
            if (cnt > 0)
            {
                low = mid + 1;
                ans++;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
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