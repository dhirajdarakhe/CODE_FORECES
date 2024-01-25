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

void solution(string s1);
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
    // cin >> t;
    forsn(i, 1, 1e3 + 1)
    {
        // cout << 'Case #' << i << ': ';
        string s = to_string(i);
        // cout<<s;
        // reverse(all(s));
        solution(s);
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
ll sum(string x, string y)
{
    ll a1 = 0;
    ll b1 = 0;
    forn(i, sz(x))
    {
        a1 += x[i] - '0';
    }
    forn(i, sz(y))
    {
        b1 += y[i] - '0';
    }
    if (abs(a1) - abs(b1) == 1 || abs(a1) - abs(b1) == 0)
        return 1;
    else
        return 0;
}
void solution(string s1)
{
    // ll mn = 2e18;
    // ll mx = -1*2e18;
    // map <ll,ll> mp;
    ll a = 0, b = 0, m = 0, n = 0, k = 0, ans = 0;
    // ll len = 0; cin >> len; string s; cin >> s;
    string s, x = "", y = "";
    // cin >> s;
    s = s1;
    forn(i, sz(s))
    {
        // if (s[i] == '0')
        // {
        //     x += '0';
        //     y += '0';
        //     continue;
        // }
        ll b = s[i] - '0';
        char c = (char)(((b / 2) + 1) + '0');
        if (b % 2 == 0)
        {
            x += (char)(b / 2) + '0';
            y += (char)(b / 2) + '0';
        }
        else
        {
            if (ans == 0)
            {
                x += c;
                y += (char)(b / 2) + '0';
                ans++;
            }
            else
            {
                x += (char)(b / 2) + '0';
                y += c;
                ans--;
            }
        }
    }

    if (sz(x) > 1)
    {
        k = 0;
        forn(i, sz(x))
        {
            if (x[i] == '0' && k != 1)
            {
                continue;
            }
            else
            {
                k = 1;
                cout << x[i];
            }
        }
    }
    else
    {
        cout << x;
    }
    cout << " ";

    if (sz(y) > 1)
    {
        k = 0;
        forn(i, sz(y))
        {
            if (y[i] == '0' && k != 1)
            {
                continue;
            }
            else
            {
                k = 1;
                cout << y[i];
            }
        }
    }
    else
    {
        cout << y;
    }
    cout << " :: " << sum(x, y);
    // v64 v(a);
    // forn(i ,a) cin >> v[i];
}