#include <bits/stdc++.h>
using namespace std;

// compute 10^len % mod safely
long long mod_pow10(long long len, long long mod)
{
    long long res = 1;
    for (long long i = 0; i < len; i++)
    {
        res = (res * 10) % mod;
    }
    return res;
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

        long long y = 1000000000LL - x; // safe y
        cout << y << "\n";

        long long s = x + y;
        long long len = to_string(y).size();
        long long power10 = mod_pow10(len, s);
        long long check = (x * power10 + y) % s;

        cout << "Debug: x#y % (x+y) = " << check << "\n"; // should print 0
    }

    return 0;
}
