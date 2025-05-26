// Author: Jubayer Ahmed
// 2025-05-24 22:56:55

#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define int long long
#define MOD 1000000007
#define INF 1e18
#define nl "\n"
#define debug(x) cerr << #x << " = " << x << nl;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define all(v) (v).begin(), (v).end()
#define vec_sort(v) sort(all(v))
#define vec_reverse(v) reverse(all(v))
#define vec_unique(v) (v).erase(unique(all(v)), (v).end())
#define print(v)          \
    for (auto x : v)      \
        cout << x << ' '; \
    cout << nl;

void solve()
{
    // lesgoooo

    string s;
    cin >> s;
    int left = 0, right = 0, flag = 0, cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == '(')
        {
            left++;
        }
        else
        {
            right++;
        }
        if (left > right)
        {
            flag = 1;
        }
        if (flag == 1 and right == left)
        {
            flag = 0;
            cnt++;
            right = 0;
            left = 0;
        }
    }
    if (cnt > 1)
    {
        yes
    }
    else
    {
        no
    }
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