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

        // Find number of digits in x
        long long p = 1, temp = x;
        while (temp > 0)
        {
            temp /= 10;
            p *= 10;
        }
        long long k = p - 1; // all 9's with same digits as x

        if (k == x)
        { // if x is all 9's
            p *= 10;
            k = p - 1;
        }

        long long y = k - x;
        cout << y << "\n";
    }
    return 0;
}
