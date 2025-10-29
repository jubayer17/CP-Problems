// Author: Jubayer Ahmed
// 2025-10-19 22:27:44

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
    int n, k, indx = -1, flag = 0, cnt = 1;
    cin >> n >> k;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (flag == 0)
            {
                cnt++;
                flag = 1;
            }

            for (int j = i + 1; j <= k - 1; j++)
            {
                if (s[i] == '1')
                {
                    indx = i;
                }
            }
        }

        if (indx != -1)
        {
            i = indx;
        }
        else
        {

            flag = 0;
            indx = -1;
        }
    }

    cout << cnt << nl;
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