#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define all(x) (x).begin(), (x).end()
typedef vector<ll> v64;
typedef vector<int> v32;
#define fast_DHIraj()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
void dhiraj();
ll binaryExpoRRec(ll a, ll b)
{
    if (b == 0)
        return 1 * 1ll;
    ll res = binaryExpoRRec(a, b / 2);
    if (b & 1)
    {
        return a * res * res;
    }
    return res * res;
}
int main()
{
    fast_DHIraj();
    // #ifndef ONLINE_JUDGE
    // freopen('input.txt', 'r', stdin);
    // freopen('error.txt', 'w', stderr);
    // freopen('output.txt', 'w', stdout);
    // #endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        dhiraj();
        cout << '\n';
    }
    return 0;
}
void dhiraj()
{
    ll m, n; cin >> n >> m;
    ll arr[n][m]; forn(i, n){forn(j, m)cin >> arr[i][j];}
    ll mx = INT_MIN;
    forn(i, n)
    {
        forn(j, m)
        {
            ll ans = arr[i][j];
            ll x,y;
            x = i - 1; y = j - 1;
            while(x >= 0 && y >= 0) {ans += arr[x][y];x--;y--;}
            x = i + 1; y = j + 1;
            while(x < n && y < m) {ans += arr[x][y];x++,y++;}
            x = i + 1; y = j - 1;
            while(x < n  && y >= 0) {ans += arr[x][y];x++;y--;}
            x = i - 1; y = j + 1;
            while(x >= 0 && y < m) {ans += arr[x][y];x--;y++;}
            mx = max(mx, ans);
        }
    }
    cout<<mx;
}