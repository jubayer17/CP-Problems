// Author: Jubayer Ahmed
// 2025-10-17 20:45:17

#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define int long long
#define nl '\n'

bool is_pal(string s)
{
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    if (is_pal(s))
    {
        cout << 0 << nl;
        cout << nl;
        return;
    }

    string x = "";
    for (auto c : s)
        if (c == '1')
            x += c;
    if (is_pal(x))
    {
        vector<int> idx;
        for (int i = 0; i < n; i++)
            if (s[i] == '0')
                idx.push_back(i + 1);
        cout << idx.size() << nl;
        for (auto i : idx)
            cout << i << " ";
        cout << nl;
        return;
    }

    x = "";
    for (auto c : s)
        if (c == '0')
            x += c;
    if (is_pal(x))
    {
        vector<int> idx;
        for (int i = 0; i < n; i++)
            if (s[i] == '1')
                idx.push_back(i + 1);
        cout << idx.size() << nl;
        for (auto i : idx)
            cout << i << " ";
        cout << nl;
        return;
    }

    cout << -1 << nl;
}

signed main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
        solve();
}
