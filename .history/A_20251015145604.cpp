// Author: Jubayer Ahmed
// 2025-10-15 14:23:49

#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long
#define nl '\n'

signed main()
{
    fast_io;
    int t;
    cin >> t;

    for (int k = 0; k < t; k++)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

               bool wrong = false;
        for (int i = 0; i < n; i++)
        {
            if (b[i] < a[i])
            {
                cout << "Case #" << k + 1 << ": -1" << nl;
                wrong = true;
                break;
            }
        }
        if (wrong)
            continue;

        // Map to store a[i] → first position where it occurs
        unordered_map<int, int> pos;
        for (int i = 0; i < n; i++)
        {
            if (pos.find(a[i]) == pos.end())
                pos[a[i]] = i;
        }

        vector<pair<int, int>> ans;

        for (int i = 0; i < n; i++)
        {
            if (b[i] > a[i] && pos.find(b[i]) != pos.end())
            {
                ans.push_back({i, pos[b[i]]});
            }
        }

        // Output
        cout << "Case #" << k + 1 << ": " << ans.size() << nl;
        for (auto &p : ans)
        {
            cout << p.first + 1 << " " << p.second + 1 << nl; // 1-indexed
        }
    }

    return 0;
}
