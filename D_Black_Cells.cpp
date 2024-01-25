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
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(int a, int b) { return (a * b) / gcd(a, b); }
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
    ll mn = 2e18;
    // ll mx = -1*2e18;
    map<ll, ll> mp;
    ll a = 0, b = 0, m = 0, n = 0, k = 0, ans = 0;
    cin >> a >> k;
    v64 L(a);
    forn(i, a) cin >> L[i];
    v64 R(a);
    forn(i, a) cin >> R[i];
    mn = 2e18;
    ans = 0;
    ll p = 0;
    ll one = 0;
    ll k1 = k;
    forn(i, a)
    {
        k1 -= (R[i] - L[i] + 1);
    }
    if (k1 > 0)
    {
        cout << "-1";
        return;
    }
    forn(i, a)
    {
        if (R[i] - L[i] + 1 <= k)
        {
            ans += 2;
            ans += R[i] - L[i];
            ans += L[i] - p;
            p = R[i];
            if (R[i] == L[i])
                one++;
            k -= (R[i] - L[i] + 1);
        }
        else
        {
            if (k)
            {
                // cout<<"dhira";
                ans += 2;        // press & release
                ans += k - 1;    // move
                ans += L[i] - p; // to reach L{i};
                p = R[i];
                ll total = R[i] - L[i] + 1;
                ll rem = total - k;
                if (one <= rem)
                {
                    ans -= one;
                    cout << ans;
                    return;
                }
                else
                {
                    ans -= rem;
                    one -= rem;
                }
                mn = ans;
                k = 0;
            }
            else
            {
                mn = ans;
                if (R[i] == L[i] || one == 0)
                {
                    continue;
                }
                ll rem = R[i] - L[i] + 1;
                mn += L[i] - p + 1;
                p = R[i];
                if (one <= rem)
                {
                    ans = min(mn - one, ans);
                    cout << ans;
                    return;
                }
                else
                {
                    mn -= rem;
                    one -= rem;
                    ans = min(mn, ans);
                }
                mn = ans;
            }
        }
    }
    cout << ans;
}