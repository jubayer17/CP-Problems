#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define nl '\n'

template <typename T>
void read(vector<T> &v, int n)
{
    v.resize(n);
    for (auto &x : v)
        cin >> x;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> vt;
    read(vt, n);

    int ans = 0;

    for (int i = 0; i < n; i++)
    { // try starting from every tree
        int cnt = 1;
        int last = vt[i];
        int j = (i + 1) % n;

        while (j != i)
        {
            if (vt[j] > last)
            {
                cnt++;
                last = vt[j];
            }
            j = (j + 1) % n;
        }

        ans = max(ans, cnt);
    }

    cout << ans << nl;
}

signed main()
{
    fast_io int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
