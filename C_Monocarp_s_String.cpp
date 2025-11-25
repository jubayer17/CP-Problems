// Author: Jubayer Ahmed
// 2025-11-05 23:37:43

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
    int A = count(s.begin(), s.end(), 'a');
    int B = n - A;
    int exA = A - B;
    if (exA == 0)
    {
        cout << 0 << nl;
        return;
    }
    int ans = n;
    map<int, int> mp;
    mp[0] = 0;
    for (int i = 1, curA = 0, curB = 0; i <= n; i++)
    {
        if (s[i - 1] == 'a')
        {

            curA++;
        }
        else
        {
            curB++;
        }
        int curState = curA - curB;
        if (mp.count(curState - exA))
        {
            int start = mp[curState - exA];
            ans = min(ans, i - start);
        }
        mp[curState] = i;
    }

    if (ans == n)
        ans = -1;
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