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
vector<int> prime(10000000, 1);
void isPrime()
{
    int c = 0;
    for (int p = 2; p * p <= 10000000; p++)
        if (prime[p] == 1)
            for (int i = p * 2; i <= 10000000; i += p)
            {
                prime[i] = 0;
            }
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
    ll n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    map<char, ll> m;
    v32 v0, v1;
    ll c0 = 0, c1 = 0;
    ll f1 = 1;
    for (char x : s)
    {
        m[x]++;
        if (x == '0')
        {
            c0++;
            if (c1 != 0)
            {
                v1.pb(c1);
            }
            c1 = 0;
        }
        else
        {
            c1++;
            if (c0 != 0)
            {
                v0.pb(c0);
            }
            c0 = 0;
        }
    }
    if (c0 != 0)
    {
        v0.pb(c0);
    }
    if (c1 != 0)
    {
        v1.pb(c1);
    }
    if (a < 0 && b >0)
    {
        ll ans = n * (b + a);
        cout << ans;
        return;
    }
    // cout<<m['0']<<" "<< m['1']<<endl;
    if (m['0'] > m['1'])
    {
        ll ans = 0;
        // cout<<"dhi";
        // cout<<v1[0];
        for (ll x : v1)
        {
            ans += ((a * x) + b);
        }
        ans += (m['0'] * a + b);
        cout << ans;
    }
    else
    {
        ll ans = 0;
        // cout<<v0[0]<<endl;
        for (ll x : v0)
        {
            ans += ((a * x) + b);
        }
        ans += (m['1'] * a + b);
        cout << ans;
    }
}
