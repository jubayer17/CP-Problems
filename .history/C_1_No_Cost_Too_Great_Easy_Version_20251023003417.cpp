// Author: Jubayer Ahmed
// 2025-10-23 00:33:13

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

const int MAXN = 200010;
bool isComposite[MAXN + 1];
vector<int> primeDivs[MAXN + 1];
int freq[MAXN + 1];

void precompute()
{
    for (int i = 2; i <= MAXN; i++)
    {
        if (!isComposite[i])
        {
            for (int j = i; j <= MAXN; j += i)
            {
                isComposite[j] = true;
                primeDivs[j].pb(i);
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    vector<int> arr, brr;
    read(arr, n);
    read(brr, n);

    int ans = 2;
    for (auto x : arr)
    {
        for (auto p : primeDivs[x])
        {
            freq[p]++;
            if (freq[p] >= 2)
                ans = 0;
        }
    }

    if (ans > 1)
    {
        for (auto x : arr)
        {
            for (auto p : primeDivs[x])
                freq[p]--;
            for (auto p : primeDivs[x + 1])
                if (freq[p] > 0)
                    ans = 1;
            for (auto p : primeDivs[x])
                freq[p]++;
        }
    }

    cout << ans << nl;

    for (auto x : arr)
        for (auto p : primeDivs[x])
            freq[p] = 0;
}

signed main()
{
    fast_io;
    precompute();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
