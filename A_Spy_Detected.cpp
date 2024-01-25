
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const char nl = '\n';
#define all(x) (x).begin(), (x).end()
#define sz(x) (ll)(x).size()
typedef vector<ll> vll;
#define pb push_back
#define fast_Rocky()                  \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define lforn(i, s) for (ll i = s; i >= 0; i--)
#define lforsn(i, s, e) for (ll i = s; i >= e; i--)
void rocky();
vll primeFactors(ll n)
{
    vll v;
    while (n % 2 == 0)
    {
        v.pb(2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            v.pb(i);
            n = n / i;
        }
    }
    if (n > 2)
    {
        v.pb(n);
    }
    return v;
}
ll strint(string str)
{
    ll len = 0;
    forn(i, str.size()) { len = len * 10 + (str[i] - '0'); }
    return len;
}
#define setDecimal(num, y) cout << fixed << setprecision(y) << num
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(int a, int b) { return (a * b) / gcd(a, b); }
int main()
{
    fast_Rocky();
    int t = 1;
    cin >> t;
    while (t--)
    {
        rocky();
        cout << '\n';
    }
    return 0;
}
void rocky()
{
    ll a = 0, b = 0, m = 0, n = 0, k = 0, ans = 0;
    cin >> a;
    vector<ll> v(a);
    forn(i, a) cin >> v[i];
    k = INT_MIN;
    // forn(i, a) k = max(k, v[i]);
    sort(all(v));
   if(v[0]<0) cout << v[0];
   else cout<<v[a-1];
    // Hii Rocky ,
}