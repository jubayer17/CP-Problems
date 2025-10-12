#include <bits/stdc++.h>
using namespace std;

// Compute number of digits in x
int num_digits(long long x)
{
    int d = 0;
    while (x > 0)
    {
        x /= 10;
        d++;
    }
    return d;
}

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

        // Choose d = 1 (smallest positive y)
        long long p = 10;          // 10^1
        long long y = p - (x % p); // guaranteed to work
        cout << y << "\n";
    }
}
