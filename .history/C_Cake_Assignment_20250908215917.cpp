#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        long long k;
        unsigned long long x;
        cin >> k >> x;
        unsigned long long T = 1ULL << (k + 1); // total cakes = 2^(k+1)
        unsigned long long mid = 1ULL << k;     // initial Chocola = 2^k
        if (x == mid)
        {
            cout << 0 << "\n\n";
            continue;
        }
        vector<int> rev;
        unsigned long long cur = x;
        while (cur != mid)
        {
            if (cur < mid)
            {
                rev.push_back(1); // inverse was doubling -> forward was op1
                cur = cur * 2ULL;
            }
            else
            {
                rev.push_back(2); // inverse was 2*cur - T -> forward was op2
                cur = cur * 2ULL - T;
            }
        }
        reverse(rev.begin(), rev.end());
        cout << rev.size() << "\n";
        for (size_t i = 0; i < rev.size(); ++i)
        {
            if (i)
                cout << ' ';
            cout << rev[i];
        }
        cout << "\n";
    }
    return 0;
}
