#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define all(x) (x).begin(), (x).end()
typedef vector<ll> v64;
typedef vector<int> v32;
#define fast_DHIraj() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
void dhiraj();
ll binaryExpoRRec(ll a, ll b) {
    if (b == 0) return 1 * 1ll;
    ll res = binaryExpoRRec(a, b / 2);
    if (b & 1) {
        return a * res * res;
    } return res * res;
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
    // cin >> t;
    while (t--) {dhiraj(); cout << "\n"; } return 0;
}
void dhiraj()
{
    ll x, y;
    cin >> x >> y;
    v32 v(y), v1(y);
    forn(i, y) { cin >> v[i]; v1[i] = v[i];}
    sort(all(v));
    sort(all(v1));
    ll mx = 0;
    ll x1 = x, x2 = x;
    while (x1--) {
        mx += v[y - 1]; v[y - 1]--;
        sort(all(v));
    }
    ll mn = 0,i = 0,p = 0;
    while (1) {
        mn += v1[i]; v1[i]--;p++;
        if (v1[i] == 0) i++;
        if (i == y || p == x2) break;
    }
    cout << mx << " " << mn;
}