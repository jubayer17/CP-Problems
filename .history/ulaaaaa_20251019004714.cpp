#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    vector<int> results;

    for (int t = 1; t <= T; t++)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];

        int ladder = 0;
        for (int i = 1; i < N; i++)
        {
            ladder = max(ladder, abs(A[i] - A[i - 1]));
        }
        results.push_back(ladder);
    }

    for (int t = 1; t <= T; t++)
    {
        cout << "Case #" << t << ": " << results[t - 1] << "\n";
    }

    return 0;
}
