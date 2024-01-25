#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
#define dl double
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define vmin(a) *min_element(all(a))
#define vmax(a) *max_element(all(a))
#define sz(x) (int)(x).size()
#define lb lower_bound
#define ub upper_bound
#define gi greater<int>
#define lb lower_bound
#define ub upper_bound
#define py cout << "YES" << '\n'
#define pn cout << "NO" << '\n'
// This less<int> is comparatar (Replace greater<int> for descending)
template <class T>
using pbds = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// find_by_order, order_of_key

#define forn(i, e) for (int i = 0; i < e; i++)
#define forsn(i, s, e) for (int i = s; i < e; i++)
#define rforn(i, s) for (int i = s; i >= 0; i--)
#define rforsn(i, s, e) for (int i = s; i >= e; i--)
const char nl = '\n';

typedef vector<int> v64;
typedef vector<int> v32;
typedef pair<int, int> pll;

void solution();
// const int M = 1e9 + 7;
// const int MOD = 1000000007;
#define setDecimal(num, y) cout << fixed << setprecision(y) << num
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
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
// minHeap:  priority_queue<int, v64, greater<int>> q;
// maxHeap:  priority_queue<int> q;
const int dx[4] = {-1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};
int XX[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int YY[] = {-1, 0, 1, -1, 1, -1, 0, 1};
// bool isValidPlace(int x, int y, int row, int colu){return (x >= 0 && y >= 0 && x < row && y < colu);}
// len-1-i
// int msb = (int)(log2(i));
int dtod(int x, int y, int colu) { return (x * colu) + y; }

void solution()
{
    int mn = 2e18;
    int mx = -1 * 2e18;
    // map <int,int> mp;
    int a = 0, b = 0, m = 0, n = 0, k = 0, ans = 0;
    cin >> a;
    v64 v(a);
    forn(i, a) cin >> v[i];
    forn(i, a) ans += (v[i] < 0);
    vector<pll> w;
    vector<pll> w1, w2;
    v64 v1 = v;
    v64 v2 = v;
    if (ans == a)
    {

        for (int i = a; i >= 2; --i)
        {
            w.pb({i - 1, i});
        }
        cout << sz(w) << nl;
        forn(i, sz(w))
        {
            cout << w[i].fi << " " << w[i].se << nl;
        }
        return;
    }
    if (ans == 0)
    {
        forn(i, a - 1)
        {
            w.pb({i + 2, i + 1});
        }
        cout << sz(w) << nl;
        forn(i, sz(w))
        {
            cout << w[i].fi << " " << w[i].se << nl;
        }
        return;
    }
    int mni, mxi;
    forn(i, a)
    {
        mn = min(mn, v[i]);
        mx = max(mx, v[i]);
    }
    forn(i, a)
    {
        if (v[i] == mn)
            mni = i;
        if (v[i] == mx)
            mxi = i;
    }

    forn(i, a)
    {
        while (v1[i] > 0)
        {
            v1[i] += v1[mni];
            w1.pb({i + 1, mni + 1});
        }
    }
    for (int i = a; i >= 2; --i)
    {
        w1.pb({i - 1, i});
    }
    forn(i, a)
    {
        while (v2[i] < 0)
        {
            v2[i] += v2[mxi];
            w2.pb({i + 1, mxi + 1});
        }
    }
    forn(i, a - 1)
    {
        w2.pb({i + 2, i + 1});
    }

    if (sz(w1) < sz(w2))
    {
        cout << sz(w1) << nl;
        forn(i, sz(w1)) cout << w1[i].fi << " " << w1[i].se << nl;
        return;
    }
    cout << sz(w2) << nl;
    forn(i, sz(w2)) cout << w2[i].fi << " " << w2[i].se << nl;
}