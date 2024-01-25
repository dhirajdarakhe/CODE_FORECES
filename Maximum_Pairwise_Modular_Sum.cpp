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
    ll a;
    cin >> a;
    ll m;
    cin >> m;
    v64 v, v1(a);
    map<ll, ll> mp;
    forn(i, a)
    {
        ll x;
        cin >> x;
        v1[i] = x;
        mp[x]++;
    }
    for (auto x : mp)
    {
        // cout<<x.first<<" ";
        v.pb(x.first);
    }
    sort(all(v), greater<int>());
    sort(all(v1), greater<int>());
    // cout<<v[0]<<" "<<v[1]<<endl;
    // if (v.size() > 1)
    // {
    ll ans1 = (v[0] + v[1]) + ((v[0] - v[1]) % m);
    ll ans2 = (v[0] + v[1]) + (((v[1] - v[0]) % m) + m);
    ll ans11 = (v1[0] + v1[0]) + ((v1[0] - v1[0]) % m);
    // ll ans12 = (v1[1] + v1[1]) + (m - ((v1[1] - v1[1]) % m));
    // cout<<ans1<<" "<<ans2;
    ll n = max(ans1, ans2);
    // ll n1 = (v[])
    cout << max(n,ans11);
    // cout<<((70-80)%3)+3;}
    // }else {
    //     ll ans1 = (v[0] + v[0]) + ((v[0] - v[0]) % m);
    //     cout<<ans1;
    // }
}
