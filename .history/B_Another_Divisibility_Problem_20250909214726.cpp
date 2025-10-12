#include <bits/stdc++.h>
using namespace std;

// Function to compute (x#y) % (x+y) safely without overflow
long long mod_concat(long long x, long long y)
{
    long long s = x + y;
    long long res = 0;
    string sx = to_string(x), sy = to_string(y);

    for (char c : sx)
        res = (res * 10 + (c - '0')) % s;
    for (char c : sy)
        res = (res * 10 + (c - '0')) % s;

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

        // Guaranteed safe y
        long long y = 1000000000LL - x; // 10^9 - x

        cout << y << "\n";

        // Debug: check if x#y is divisible by x+y
        cout << "Debug: x#y % (x+y) = " << mod_concat(x, y) << "\n";
    }

    return 0;
}
