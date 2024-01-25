
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
    cin >> t;
    while (t--) {dhiraj(); cout << "\n"; } return 0;
}
void dhiraj()
{
    ll l; cin >> l;
    vector<int> v(l);
    map<int, int> m;
    for (int i = 0; i < l; ++i ) {
        cin >> v[i];
        m[v[i]]++;
    }
    ll mx =  INT_MIN;
    ll ele;
    for (auto x :  m) {
        if (mx <= x.second) {
            mx = x.second;
            ele =  x.first;
        }
    }
    ll ans = l - mx;
    if (ans == 0) {
        cout << 0;
        return;
    }
    // cout<<mx<<" " <<ans<<" ";
    ll p = mx;
    if(mx >= ans){
        ans++;
        cout<<ans;
        return;
    }
    ll a = ans;
    while(a > 0){
        a -= mx;
        mx *= 2;
        ans++;
    }
    cout<<ans;
    // while ( l-mx >= p) {
    //     p *= 2;
    //     ans++;
    // }
    // cout << ans;
}
