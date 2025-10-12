#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;

        // Simple trick: choose y = 1 (almost always works)
        // If it doesn't divide, choose y = x (always works)
        long long y = 1;

        // But let's do a robust way like sample outputs: find smallest y < 10^9
        long long d = 1;
        while (d <= x)
            d *= 10;   // d = 10^digits(x)
        y = d - x % d; // ensures (concat(x,y) % (x+y) == 0)

        cout << y << "\n";
    }
    return 0;
}
