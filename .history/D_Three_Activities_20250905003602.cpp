// Author: Jubayer Ahmed
// 2025-09-04 23:58:37

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
    int n;
    cin >> n;

    vector<pair<int, int>> pq1, pq2, pq3;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq1.push_back({x, i});
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq2.push_back({x, i});
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq3.push_back({x, i});
    }

    sort(pq1.rbegin(), pq1.rend());
    sort(pq2.rbegin(), pq2.rend());
    sort(pq3.rbegin(), pq3.rend());

    int ans = 0;

    if (pq1[0].second == pq2[0].second)
    {

        int a = pq1[0].first + pq2[1].first;
        int b = pq1[1].first + pq2[0].first;

        int use1, use2;
        if (a > b)
        {
            use1 = pq1[0].second;
            use2 = pq2[1].second;
            if (pq3[0].second != use1 && pq3[0].second != use2)
            {
                ans = pq1[0].first + pq2[1].first + pq3[0].first;
            }
            else
            {
                ans = max(
                    pq1[0].first + pq2[1].first + pq3[1].first,
                    pq1[0].first + pq2[2].first + pq3[0].first);
            }
        }
        else
        {
            use1 = pq1[1].second;
            use2 = pq2[0].second;
            if (pq3[0].second != use1 && pq3[0].second != use2)
            {
                ans = pq1[1].first + pq2[0].first + pq3[0].first;
            }
            else
            {
                ans = max(
                    pq1[1].first + pq2[0].first + pq3[1].first,
                    pq1[2].first + pq2[0].first + pq3[0].first);
            }
        }
    }
    else
    {

        if (pq3[0].second != pq1[0].second && pq3[0].second != pq2[0].second)
        {
            ans = pq1[0].first + pq2[0].first + pq3[0].first;
        }
        else
        {
            ans = max(
                pq1[0].first + pq2[0].first + pq3[1].first,
                max(
                    pq1[0].first + pq2[1].first + pq3[0].first,
                    pq1[1].first + pq2[0].first + pq3[0].first));
        }
    }

    cout << ans << nl;
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
