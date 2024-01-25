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
// ll binaryExpoRRec(ll a, ll b) {if (b == 0) return 1 * 1ll;ll res = binaryExpoRRec(a, b / 2);if (b & 1) {return a * res * res;} return res * res;}
// vector<int> prime(10000000, 1);
// void isPrime(){int c = 0;for (int p = 2; p * p <= 10000000; p++) if (prime[p] == 1)for (int i = p * 2; i <= 10000000; i += p){prime[i] = 0;}}
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
    // Hii Dhiraj ,
    // ll a;
    // cin>>a;
    // v64 v(a);
    map<ll, ll> mp;
    map<ll, ll> mp1;
    // forn(i ,a) cin >>v[i];
    ll m, n;
    cin >> m >> n;
    v64 v[m], b[m];
    ll minus = 0;
    forn(i, m)
    {
        forn(j, n)
        {
            ll x;
            cin >> x;
            v[i].pb(x);
            b[i].pb(x);
            mp1[x];
        }
        sort(all(v[i]));
        if (mp1.size() == 1)
        {
            minus++;
        }
        mp1.clear();
    }
    forn(i, m)
    {
        forn(j, n)
        {
            if (v[i][j] != b[i][j])
            {
                mp[j]++;
            }
        }
    }
    // cout<<v[2][1]<< b[2][1]<<endl;
    if (mp.size() == 0)
    {
        cout << 1 << " " << 1;
        return;
    }
    if (mp.size() > 2)
    {
        cout << -1;
        return;
    }
    ll f = 0;
    ll i1 = 0, j1 = 0, xx = 0;
    for (auto x : mp)
    {
        if (x.second != m - minus)
        {
            f = 1;
        }
        if (i1 == 0)
            i1 = x.first;
        else
            j1 = x.first;
        xx = x.second;
    }
    // cout<<v[2][i1]<< v[2][j1]<<endl;
    ll p = 0;
    forn(i, m)
    {
        if (v[i][i1] == v[i][j1])
        {
            p++;
        }
    }
    if (p == m - xx)
        f = 0;
    if (f == 1)
    {
        cout << -1;
        return;
    }
    for (auto x : mp)
    {
        cout << x.first + 1 << " ";
    }
}
