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
const int N = 4002;
v32 g[N];
v32 wg(N);
v32 sum(N);
bool vis[N];
void dfs(ll pare){
    vis[pare] = true;
    sum[pare] = wg[pare];
    for(auto child : g[pare]){
        if(vis[child]) continue;
          dfs(child);
          sum[pare] += sum[child];
    }
}
void dhiraj()
{
    ll n;
    cin >> n;
    v32 v(n);
    forn(i, n + 1)
    {
        g[i].clear();
        sum[i] = 0;
        wg[i] = 0;
        vis[i] = false;
    }
    forn(i, n-1)
    {
        ll x;
        cin >> x;
        g[x].pb(i+2);
    }
    string s;
    cin >> s;
    forn(i , n){
        if(s[i] == 'B') wg[i+1] = -1;
        else wg[i+1] = 1;
    }
    ll cnt  = 0;
    dfs(1);
    forsn(i, 1 , n+1){
        if(sum[i] == 0){
            cnt++;
        }
    }
    cout<<cnt;
}