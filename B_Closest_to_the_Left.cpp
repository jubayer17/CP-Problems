// Author: Jubayer Ahmed
// 2025-06-03 23:20:29

#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long
#define MOD 1000000007
#define INF 1e18
#define nl '\n'
#define pb push_back
#define ff first
#define ss second
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define print(v)          \
    for (auto x : v)      \
        cout << x << ' '; \
    cout << nl;
#define debug(x) cerr << #x << " = " << x << nl;

template <typename T>
void read(vector<T> &v, int n)
{
    v.resize(n);
    for (auto &x : v)
        cin >> x;
}
template <typename T>
void print_pair(const pair<T, T> &p) { cout << p.first << ' ' << p.second << nl; }
int bs(const vector<int> &arr, int target)
{
    int low = 0, high = arr.size() - 1, mx = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= target)
        {
            mx = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return mx;
}

signed main()
{
    fast_io;
    int n, k;
    cin >> n >> k;
    vector<int> vt(n);
    for (int i = 0; i < n; i++)
        cin >> vt[i];

    while (k--)
    {
        int x;
        cin >> x;
        int ans = bs(vt, x);
        cout << (ans == -1 ? 0 : ans + 1) << nl;
    }
    return 0;
}