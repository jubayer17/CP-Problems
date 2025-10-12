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

        // Choose a safe y
        long long y = 1000000000LL - x;
        cout << y << "\n";

        // Extra line to check divisibility (for debugging)
        string concat_str = to_string(x) + to_string(y);
        long long concat = stoll(concat_str);
        cout << "Debug: x#y % (x+y) = " << (concat % (x + y)) << "\n";
    }
    return 0;
}
