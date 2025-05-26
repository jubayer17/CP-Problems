// Author: Jubayer Ahmed
// 2025-05-24 21:15:24

#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define int long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define fi first
#define se second
#define mp make_pair
#define MOD 1000000007
#define INF 1e18
#define nl "\n"
#define debug(x) cerr << #x << " = " << x << nl;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define YES cout << "YES" << nl;
#define NO cout << "NO" << nl;
#define SORT(v) sort(all(v))
#define REVERSE(v) reverse(all(v))
#define UNIQUE(v) (v).erase(unique(all(v)), (v).end())
#define PRINT(v)          \
    for (auto x : v)      \
        cout << x << ' '; \
    cout << nl;

void solve()
{

    int n;
    cin >> n;
    vector<int> vt(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vt[i];
    }
    sort(vt.begin(), vt.end());
    int mn = INF;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if ((vt[i] + vt[j]) % 2 == 0)
            {
                int x = i + ((n - 1) - j);
                mn = min(mn, x);
            }
        }
    }
    cout << mn << nl;
}

signed main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}