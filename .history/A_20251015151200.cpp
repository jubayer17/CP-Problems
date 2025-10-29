// Author: ChatGPT (solution)
// Compile: g++ -O2 -std=c++17 solution.cpp -o solution

#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T))
        return 0;
    for (int tc = 1; tc <= T; ++tc)
    {
        int N;
        cin >> N;
        vector<int> A(N + 1), B(N + 1);
        int maxV = N;
        for (int i = 1; i <= N; ++i)
            cin >> A[i];
        for (int i = 1; i <= N; ++i)
            cin >> B[i];
        // quick checks
        bool ok = true;
        for (int i = 1; i <= N; ++i)
            if (A[i] > B[i])
                ok = false;
        // also all B-values must appear somewhere in initial A (else can't create them)
        // but we don't strictly have to check globally if later code will catch it; check helps early exit
        vector<int> freqA(maxV + 1, 0);
        for (int i = 1; i <= N; ++i)
            if (A[i] >= 1 && A[i] <= maxV)
                ++freqA[A[i]];
        for (int i = 1; i <= N && ok; ++i)
            if (B[i] >= 1 && B[i] <= maxV)
            {
                if (freqA[B[i]] == 0)
                {
                    // It might still be possible if some other index has that value initially but we counted zero => impossible
                    ok = false;
                }
            }
        if (!ok)
        {
            cout << "Case #" << tc << ": -1\n";
            continue;
        }

        // pos[v] = list of indices that at some point were equal to v (we push new ones as we set them)
        vector<vector<int>> pos(maxV + 1);
        for (int i = 1; i <= N; ++i)
            pos[A[i]].push_back(i);
        vector<int> cur = A;
        vector<int> ptr(maxV + 1, 0); // next candidate index in pos[v] to test for being current==v
        vector<pii> ops;

        // For values present in B, we need to process in descending order.
        // Collect unique target values to iterate (but iterating all values from maxV..1 is fine).
        for (int v = maxV; v >= 1; --v)
        {
            // build list of indices that must become v
            vector<int> need;
            for (int i = 1; i <= N; ++i)
            {
                // naive scanning all N each value would be O(N^2) - we must avoid that.
                // Instead we gather need indices once: but to keep code simple and efficient,
                // we'll build an index list of B==v before the loop.
            }
        }
        // The naive above is incorrect (O(N^2)). So rebuild more efficient approach:
        // Precompute indices_by_target[v]
        vector<vector<int>> targetIdx(maxV + 1);
        for (int i = 1; i <= N; ++i)
            targetIdx[B[i]].push_back(i);

        bool impossible = false;
        for (int v = maxV; v >= 1; --v)
        {
            if (targetIdx[v].empty())
                continue;
            // prepare list of indices that need to be raised to v
            vector<int> need;
            for (int idx : targetIdx[v])
                if (cur[idx] != v)
                    need.push_back(idx);

            if (need.empty())
                continue; // nothing to do for this value

            // find an available donor in pos[v] whose current value is still v
            while (ptr[v] < (int)pos[v].size() && cur[pos[v][ptr[v]]] != v)
                ++ptr[v];
            if (ptr[v] >= (int)pos[v].size())
            {
                // no donor available -> impossible
                impossible = true;
                break;
            }
            int donor = pos[v][ptr[v]];
            // use donor to warm all need indices
            for (int idx : need)
            {
                // donor must be hotter: cur[donor] == v > cur[idx] (since cur[idx] < = v-1)
                ops.emplace_back(donor, idx);
                // update cur and pos
                int old = cur[idx];
                cur[idx] = v;
                pos[v].push_back(idx); // this idx can be used for later as donor at same v if needed
            }
            // donor remains usable (ptr[v] still points to first valid donor)
        }

        if (impossible)
        {
            cout << "Case #" << tc << ": -1\n";
        }
        else
        {
            // final check: cur must equal B
            bool match = true;
            for (int i = 1; i <= N; ++i)
                if (cur[i] != B[i])
                {
                    match = false;
                    break;
                }
            if (!match)
            {
                cout << "Case #" << tc << ": -1\n";
            }
            else
            {
                cout << "Case #" << tc << ": " << ops.size() << "\n";
                for (auto &p : ops)
                    cout << p.first << " " << p.second << "\n";
            }
        }
    }
    return 0;
}
