// Author: Jubayer Ahmed
// 2025-09-04 23:58:37

#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long
#define MOD 1000000007
#define INF (long long)4e18
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
    int n;
    if (!(cin >> n))
        return;

    vector<pair<int, int>> pq1, pq2, pq3;
    pq1.reserve(n);
    pq2.reserve(n);
    pq3.reserve(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq1.pb({x, i});
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq2.pb({x, i});
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq3.pb({x, i});
    }

    sort(rall(pq1));
    sort(rall(pq2));
    sort(rall(pq3));

    // Consider only top K from each to avoid O(n^3).
    // K=50 is plenty for typical constraints; adjust if needed.
    int K = min<long long>(n, 50);

    long long best = LLONG_MIN;

    for (int i = 0; i < K; i++)
    {
        for (int j = 0; j < K; j++)
        {
            if (pq1[i].second == pq2[j].second)
                continue;
            for (int k = 0; k < K; k++)
            {
                int i1 = pq1[i].second, i2 = pq2[j].second, i3 = pq3[k].second;
                if (i1 == i3 || i2 == i3)
                    continue;
                long long sum = (long long)pq1[i].first + pq2[j].first + pq3[k].first;
                if (sum > best)
                    best = sum;
            }
        }
    }

    // Edge case: if n < 3, it's impossible to have three distinct indices.
    // If you want to define behavior, you can print something else.
    if (n < 3)
    {
        // No valid triple with distinct indices
        cout << best << nl; // will remain LLONG_MIN; change if problem demands.
        return;
    }

    cout << best << nl;
}

signed main()
{
    fast_io;
    int t = 1;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        solve();
    }
    return 0;
}
