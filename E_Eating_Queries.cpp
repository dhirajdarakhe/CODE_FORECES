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
        // cout << '\n';
    }
    return 0;
}
void dhiraj()
{
    ll n, m;
    cin >> n >> m;
    v64 v(n);
    forn(i, n)
    {
        cin >> v[i];
    }
    sort(all(v), greater<int>());
    v64 p(n);
    p[0] = v[0];
    forsn(i, 1, n)
    {
        p[i] = p[i - 1] + v[i];
    }
    forn(i, m)
    {
        ll ele;
        cin >> ele;
        forn(i, n)
        {
            ll ind = lower_bound(all(p), ele) - p.begin();
            if (ind <= n - 1) cout << ind + 1<<"\n";
            else cout << -1<<"\n";
            break;
        }
    }
}
