#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T))
        return 0;
    for (int tc = 1; tc <= T; ++tc)
    {
        int n;
        long long a, b;
        cin >> n >> a >> b;

        vector<long long> res(2 * n, 1);
        res[n] = b;
        cout << "Case #" << tc << ": ";
        for (int i = 0; i < 2 * n; ++i)
        {
            if (i)
                cout << ' ';
            cout << res[i];
        }
        cout << '\n';
    }
    return 0;
}
