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

// Query function time complexity = > o(logn)
class ST
{

    vector<ll> st, lazy;

public:
    ST(ll n)
    {
        st.resize(4 * n + 1);
        lazy.resize(4 * n + 1);
    }
    void build(ll ind, ll low, ll high, ll arr[])
    {
        // base condition
        if (low == high)
        {
            st[ind] = arr[low];
            return;
        }
        ll mid = (low + high) / 2;
        build(2 * ind + 1, low, mid, arr);
        build(2 * ind + 2, mid + 1, high, arr);
        st[ind] = st[2 * ind + 1] + st[2 * ind + 2];
    }
    void update(ll ind, ll low, ll high, ll l, ll r, ll val)
    {

        // 1   firstly we will check is there any update remaining;
        // if there ;
        // then update the previous remaining updates
        // and propagate dounwords;
        if (lazy[ind] != 0)
        {
            st[ind] += (high - low + 1) * lazy[ind];
            // once it is updated
            // then propagate downword
            if (low != high)
            {
                lazy[2 * ind + 1] += lazy[ind];
                lazy[2 * ind + 2] += lazy[ind];
            }
            lazy[ind] = 0;
        }

        // 2   no overlap
        // don't do any thing
        // low high l r or l r low high
        if (high < l || r < low)
            return;

        // 3   complete overlap;
        // l low high r
        if (l <= low && high <= r)
        {
            st[ind] += (high - low + 1) * val;
            // if it have children
            if (low != high)
            {
                lazy[2 * ind + 1] += val;
                lazy[2 * ind + 2] += val;
            }
            return;
        }

        // 4   partial overlap
        ll mid = (low + high) / 2;
        update(2 * ind + 1, low, mid, l, r, val);
        update(2 * ind + 2, mid + 1, high, l, r, val);
        st[ind] = st[2 * ind + 1] + st[2 * ind + 2];
    }
    ll query(ll ind, ll low, ll high, ll l, ll r)
    {

        // 1   firstly we will check is there any update remaining;
        // if there ;
        // then update the previous remaining updates
        // and propagate dounwords;
        if (lazy[ind] != 0)
        {
            st[ind] += (high - low + 1) * lazy[ind];
            // once it is updated
            // then propagate downword
            if (low != high)
            {
                lazy[2 * ind + 1] += lazy[ind];
                lazy[2 * ind + 2] += lazy[ind];
            }
            lazy[ind] = 0;
        }

        // 2   no overlap
        // we don't do any thing
        // low high l r or l r low high
        if (high < l || r < low)
            return 0;

        // 3   complete overlap;
        // l low high r
        if (l <= low && high <= r)
            return st[ind];

        // 4   partial overlap
        ll mid = (low + high) / 2;
        ll left = query(2 * ind + 1, low, mid, l, r);
        ll right = query(2 * ind + 2, mid + 1, high, l, r);
        return left + right;
    }
};
void solution()
{
    ll n;
    string s = "";
    cin >> s;

    n = sz(s) + 1;
    ll arr[n];
    for (ll i = 0; i < n; ++i)
        arr[i] = 0;
    ST st(n);
    st.build(0, 0, n - 1, arr);
    ll q;

    cin >> q;
    while (q--)
    {
        ll l = 0;
        cin >> l;
        ll r = n - l;
        st.update(0, 0, n - 1, l, r, 1);
    }
    map<char, ll> mp;
    string y = "";
    forn(i, n - 1)
    {
        y += 'x';
    }
    forsn(i, 1, n)
    {
        if (st.query(0, 0, n - 1, i, i) & 1)
        {
            y[n - i - 1] = s[i - 1];
        }
        else
        {
            y[ i - 1] = s[i - 1];
        }
    }
    cout << y;
}