#include <bits/stdc++.h>
using namespace std;

long long concat(long long x, long long y)
{
    long long d = 1;
    while (d <= y)
        d *= 10; // find 10^digits(y)
    return x * d + y;
}

int main()
{
    long long x;
    cin >> x;

    for (long long y = 1; y <= 1000000; y++)
    { // search up to a limit
        long long num = concat(x, y);
        if (num % (x + y) == 0)
        {
            cout << y << "\n";
            return 0;
        }
    }

    cout << -1 << "\n"; // if not found in range
    return 0;
}
