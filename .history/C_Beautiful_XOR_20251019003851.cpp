#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
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

        cout << "Case #" << t << ": " << ladder << "\n";
    }
    return 0;
}
