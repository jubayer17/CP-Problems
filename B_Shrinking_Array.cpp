// Author: Jubayer Ahmed
// 2025-06-24 21:16:34

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

bool check(int val, int l, int r)
{
    return (val - 1 >= l && val - 1 <= r) || (val + 1 >= l && val + 1 <= r);
}

void solve()
{
    int n, flag = 0;
    cin >> n;
    vector<int> vt;
    read(vt, n);

    // Immediate check: any adjacent pair differs by <= 1 → return 0
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(vt[i] - vt[i + 1]) <= 1)
        {
            cout << 0 << nl;
            return;
        }
    }

    for (int i = 0; i <= n - 2; i++)
    {
        if (i == 0)
        {
            if (i + 2 < n && check(vt[i], vt[i + 1], vt[i + 2]))
            {
                flag = 1;
                break;
            }
        }
        else if (i == n - 2)
        {
            if (n >= 3 && check(vt[n - 3], vt[n - 2], vt[n - 1]))
            {
                flag = 1;
                break;
            }
        }
        else
        {
            bool leftCheck = (i - 1 >= 0) && check(vt[i - 1], vt[i], vt[i + 1]);
            bool rightCheck = (i + 2 < n) && check(vt[i + 2], vt[i], vt[i + 1]);

            if (leftCheck || rightCheck)
            {
                flag = 1;
                break;
            }
        }
    }

    cout << (flag ? 1 : -1) << nl;
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
