
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
    // freopen("input.txt", "r", stdin);
    // freopen("error.txt", "w", stderr);
    // freopen("output.txt", "w", stdout);
    // #endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        dhiraj();
        cout << "\n";
    }
    return 0;
}
void dhiraj()
{
    ll l;
    cin >> l;
    vector<int> v(l);
    ll f = 1;
    map<int, int> m;
    for (ll i = 0; i < l; i++)
    {
        cin >> v[i];
        m[v[i]]++;
        if (v[i] == 0)
        {
            f = 0;
        }
    }
    ll ans = 0;
    ll dif = 0;
    for (auto x : m)
    {
        if (x.first != 0 && x.second > 1)
        {
            ans += x.second;
            f = 0;
        }
        if (x.first != 0 && x.second  == 1)
        {
            dif++;
        }
    }
    if (f == 0)
    {
          ans  += dif;
    }else{
        ans = l+1;
    }
     cout<<ans;
}
