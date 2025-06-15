// Author: Jubayer Ahmed
// 2025-06-14 22:12:45

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
    int n, k;
    cin >> n >> k;
    vector<int> vt(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vt[i];
    }
    sort(vt.begin(), vt.end());

    vector<int> pref(n);
    pref[0] = vt[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = vt[i] + pref[i - 1];
    }

    int finalans = INT64_MIN;

    for (int first = 0; first <= k; first++)
    {
        int last = k - first;

        int left = first * 2;
        int right = n - last - 1;

        if (left >= n || right < 0)
            continue;

        int ans = pref[right] - (left == 0 ? 0 : pref[left - 1]);
        finalans = max(ans, finalans);
    }

    cout << finalans << nl;
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