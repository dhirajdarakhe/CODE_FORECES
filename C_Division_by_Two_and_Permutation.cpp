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
    // Hii Dhiraj ,
    ll a;
    cin >> a;
    v64 v(a);
    map<ll, ll> m;
    forn(i, a)
    {
        ll x;
        cin >> x;
        while (x > a)
        {
            x /= 2;
        }
        while (m[x])
        {
            x /= 2;
        }
        if(x == 0){
            x = 1;
        }
        m[x]++;
    }
    ll f = 0;
    for (auto x : m)
    {
        if (x.second > 1)
        {
            f = 1;
        }
    }
    if (f)
        cout << "NO";
    else
        cout << "YES";
}
