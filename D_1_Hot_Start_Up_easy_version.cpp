
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
#define py cout << "YES" << '\n'
#define pn cout << "NO" << '\n'
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
ll gcold(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcold(b, a % b);
}
ll lcm(int a, int b) { return (a * b) / gcold(a, b); }
d
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
// string alpha = 'abcoldefghijklmnopqrstuvwxyz';
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

ll f(v64 &v, v64 &cold, v64 &hot, vector<v64> &dp, int i, int n, int j, int k, int last_program_1, int last_program_2)
{
    if (i == n)
        return 0;
    if (i == 0)
        return f(v, cold, hot, dp, i + 1, n, j + 1, k, v[i], -1) + cold[v[i] - 1];
    ll t = INT_MAX;
    ll nt = INT_MIN;

    // take first CPU

    if (v[i] == last_program_1)
    {
        t = f(v, cold, hot, dp, i + 1, n, j + 1, k, last_program_1, last_program_2) + hot[v[i] - 1];
    }
    else
    {
        t = f(v, cold, hot, dp, i + 1, n, j + 1, k, v[i], last_program_2) + cold[v[i] - 1];
    }

    // take second CPU

    if (v[i] == last_program_2)
    {
        nt = f(v, cold, hot, dp, i + 1, n, j + 1, k, last_program_1, last_program_2) + hot[v[i] - 1];
    }
    else
    {
        nt = f(v, cold, hot, dp, i + 1, n, j + 1, k, last_program_1, v[i]) + cold[v[i] - 1];
    }

    return min(t, nt);
}
void solution()
{
    // ll mn = 2e18;
    // ll mx = -1*2e18;
    // map <ll,ll> mp;
    ll a = 0, b = 0, m = 0, n = 0, k = 0, ans = 0;
    cin >> a >> k;
    v64 v(a);
    forn(i, a) cin >> v[i];
    v64 hot(k), cold(k);
    for (auto &x : cold)
        cin >> x;
    for (auto &x : hot)
        cin >> x;
    vector<v64> dp(5000, v64(5000, -1));
    cout << f(v, cold, hot, dp, 0, a, 0, k, 0, 0);
}