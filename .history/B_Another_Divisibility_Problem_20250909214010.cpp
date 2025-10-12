#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t))
        return 0;
    const long long S = 999999999LL; // 10^9 - 1
    while (t--)
    {
        long long x;
        cin >> x;
        cout << (S - x) << '\n';
    }
    return 0;
}
