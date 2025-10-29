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
            maxv = max(maxv, A[i]);
        }
        for (int i = 0; i < N; ++i)
        {
            cin >> B[i];
            maxv = max(maxv, B[i]);
        }

        bool invalid = false;
        for (int i = 0; i < N; ++i)
            if (A[i] > B[i])
            {
                invalid = true;
                break;
            }
        if (invalid)
        {
            cout << "Case #" << tc << ": -1" << nl;
            continue;
        }

        vector<deque<int>> pos(maxv + 1);
        vector<vector<int>> need(maxv + 1);
        vector<int> curr = A;

        for (int i = 0; i < N; ++i)
            pos[A[i]].push_back(i);
        for (int i = 0; i < N; ++i)
            if (A[i] != B[i])
                need[B[i]].push_back(i);

        vector<pair<int, int>> ops;
        bool impossible = false;

        for (int val = maxv; val >= 1; --val)
        {
            if (need[val].empty())
                continue;
            while (!pos[val].empty() && curr[pos[val].front()] != val)
                pos[val].pop_front();
            if (pos[val].empty())
            {
                impossible = true;
                break;
            }
            int source = pos[val].front();
            for (int idx : need[val])
            {
                if (curr[idx] == val)
                    continue;
                ops.emplace_back(source, idx);
                curr[idx] = val;
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
