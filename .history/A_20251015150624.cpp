#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl '\n'

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        int N;
        cin >> N;
        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];
        for (int i = 0; i < N; i++)
            cin >> B[i];

        bool impossible = false;
        for (int i = 0; i < N; i++)
        {
            if (B[i] < A[i])
            {
                impossible = true;
                break;
            }
        }
        if (impossible)
        {
            cout << "Case #" << t << ": -1" << nl;
            continue;
        }

        map<int, vector<int>> need;
        for (int i = 0; i < N; i++)
        {
            if (B[i] != A[i])
            {
                need[B[i]].push_back(i);
            }
        }

        vector<pair<int, int>> ops;
        vector<int> curr = A;

        for (auto it = need.rbegin(); it != need.rend(); it++)
        {
            int temp = it->first;
            vector<int> &indices = it->second;

            int source = -1;
            for (int i = 0; i < N; i++)
            {
                if (curr[i] == temp)
                {
                    source = i;
                    break;
                }
            }
            if (source == -1)
            {
                impossible = true;
                break;
            }

            for (int idx : indices)
            {
                ops.push_back({idx, source});
                curr[idx] = temp;
            }
        }

        if (impossible)
        {
            cout << "Case #" << t << ": -1" << nl;
        }
        else
        {
            cout << "Case #" << t << ": " << ops.size() << nl;
            for (auto &p : ops)
            {
                cout << p.first + 1 << " " << p.second + 1 << nl;
            }
        }
    }
    return 0;
}
