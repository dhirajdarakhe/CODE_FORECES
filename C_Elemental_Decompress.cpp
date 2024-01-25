#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define dl double
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define vmin(a) *min_element(all(a))
#define vmax(a) *max_element(all(a))
#define sz(x) (ll)(x).size()
#define lb lower_bound
#define ub upper_bound
#define gi greater<int>
#define lb lower_bound
#define ub upper_bound

// This less<int> is comparatar (Replace greater<int> for descending)
template <class T>
using pbds = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// find_by_order, order_of_key

#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
const char nl = '\n';

typedef vector<ll> v64;
typedef vector<int> v32;
typedef pair<ll, ll> pll;

void solution();
// const ll M = 1e9 + 7;
// const ll MOD = 1000000007;
#define setDecimal(num, y) cout << fixed << setprecision(y) << num
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(int a, int b) { return (a * b) / gcd(a, b); }
void prefixsum(v64 &v) { forsn(i, 1, sz(v)) v[i] += v[i - 1]; }
void postfixsum(v64 &v) { rforsn(i, sz(v) - 2, 0) v[i] += v[i + 1]; }

signed main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    forsn(i, 1, t + 1)
    {
        // cout << 'Case #' << i << ': ';
        solution();
        cout << '\n';
    }
    return 0;
}
// string alpha = 'abcdefghijklmnopqrstuvwxyz';
// minHeap:  priority_queue<ll, v64, greater<int>> q;
// maxHeap:  priority_queue<ll> q;
const int dx[4] = {-1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};
int XX[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int YY[] = {-1, 0, 1, -1, 1, -1, 0, 1};
// bool isValidPlace(int x, int y, int row, int colu){return (x >= 0 && y >= 0 && x < row && y < colu);}
// len-1-i
// ll msb = (int)(log2(i));
ll dtod(int x, int y, int colu) { return (x * colu) + y; }

void solution()
{
    // ll mn = 2e18;
    // ll mx = -1*2e18;
    // map <ll,ll> mp;
    ll a = 0, b = 0, m = 0, n = 0, k = 0, ans = 0;
    cin >> a;
    v64 v(a);
    forn(i, a) cin >> v[i];
    vector<pll> w1, w2;
    map<ll, ll> m1, m2;
    forn(i, a)
    {
        if (m1[v[i]] == 0)
        {
            // w[1][i] = v[i];
            w1.pb({v[i], i});
            m1[v[i]]++;
        }
        else if (m2[v[i]] == 0)
        {
            // w[2][i] = v[i];
            w2.pb({v[i], i});
            m2[v[i]]++;
        }
        else
        {
            cout << "NO";
            return;
        }
    }
    v64 up, dn;
    forn(i, a)
    {
        k = i + 1;
        if (m1[k] == 0)
            up.pb(k);
        if (m2[k] == 0)
            dn.pb(k);
    }
    sort(all(up));
    sort(all(dn));
    sort(all(w1));
    sort(all(w2));
    // cout << " --- " << nl;
    // for (auto x : up)
    //     cout << x << " ";
    // cout << nl;
    // for (auto x : dn)
    //     cout << x << " ";
    // cout << nl;
    // for (auto x : w1)
    //     cout << x.fi << " ";
    // cout << nl;
    // for (auto x : w2)
    //     cout << x.fi << " ";
    // w1 & dn
    if (sz(w1) != sz(dn) || sz(w2) != sz(up))
    {
        cout << "NO";
        return;
    }
    map<ll, pll> last;
    forn(i, sz(w1))
    {
        if (dn[i] > w1[i].fi)
        {
            cout << "NO";
            return;
        }
        last[w1[i].se] = {w1[i].fi, dn[i]};
    }
    // w2 & up
    forn(i, sz(w2))
    {
        if (up[i] > w2[i].fi)
        {
            cout << "NO";
            return;
        }
        last[w2[i].se] = {up[i], w2[i].fi};
    }
    cout << "YES" << nl;
    for (auto x : last)
    {
        cout << x.se.fi << " ";
    }
    // << " " << x.se.se << nl;
    cout << nl;
    for (auto x : last)
    {
        cout << x.se.se << " ";
    }
}