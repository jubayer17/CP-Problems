#include <bits/stdc++.h>
using namespace std;
#define int long long
#define nl '\n'

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (!(cin >> T))
        return 0;
    for (int tc = 1; tc <= T; ++tc)
    {
        int N;
        cin >> N;
        vector<int> A(N), B(N);
        int maxv = 0;
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
            maxv = max(maxv, (int)A[i]);
        }
        for (int i = 0; i < N; ++i)
        {
            cin >> B[i];
            maxv = max(maxv, (int)B[i]);
        }

        bool bad = false;
        for (int i = 0; i < N; ++i)
            if (A[i] > B[i])
            {
                bad = true;
                break;
            }
        if (bad)
        {
            cout << "Case #" << tc << ": -1" << nl;
            continue;
        }

        vector<vector<int>> pos(maxv + 1), need(maxv + 1);
        for (int i = 0; i < N; ++i)
        {
            if (A[i] == B[i])
                pos[A[i]].push_back(i);
            else
                need[B[i]].push_back(i);
        }

        vector<pair<int, int>> ops;
        bool impossible = false;
        for (int val = maxv; val >= 1; --val)
        {
            if (need[val].empty())
                continue;
            if (pos[val].empty())
            {
                impossible = true;
                break;
            }
            int source = pos[val][0];
            for (int idx : need[val])
            {
                ops.emplace_back(source, idx);
                pos[val].push_back(idx);
            }
        }

        if (impossible)
        {
            cout << "Case #" << tc << ": -1" << nl;
        }
        else
        {
            cout << "Case #" << tc << ": " << ops.size() << nl;
            for (auto &p : ops)
                cout << p.first + 1 << " " << p.second + 1 << nl;
        }
    }
    return 0;
}
