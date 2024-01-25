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
const int N = 1e7 + 10;
vector<bool> prime(N, 1);
vector<ll> com;
void printDivisors(ll n)
{
    ll p = 0;
    ll np = 0;
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                if (prime[i])
                    p++;
                else
                    np++;
            else
            {
                if (prime[i])
                    p++;
                else
                    np++;
                if (prime[n / i])
                    p++;
                else
                    np++;
            }
        }
    }
    if (np > p)
        com.pb(n);
}
signed main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // prime[0] = prime[1] = false;
    // for (int i = 2; i <= N; ++i)
    // {
    //     if (prime[i])
    //     {
    //         for (int j = i * 2; j <= N; j += i)
    //         {
    //             prime[j] = false;
    //         }
    //     }
    // }
    // forsn(i, 2, 1010)
    // {
    //     printDivisors(i);
    //     // cout<<"ff";
    // }
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
    map<ll, ll> mp;
    ll a = 0, b = 0, m = 0, n = 0, k = 0, ans = 1;
    // ll len = 0; cin >> len; string s; cin >> s;
    cin >> a;
    v64 v(a);
    forn(i, a) cin >> v[i];
    // forn(i, a) ans *= v[i];
    // set<int> prime_factor;
    forn(j, a)
    {
        for (int i = 2; i * i <= v[]; ++i)
        {                         //  2    3          // 07   and 13 hasn't have any divisor present below sqrt(13)  if ithas then it would have become 1 , else if hould be greater then 1, we need to consider that number that why we added last
            while (v[] % i == 0) /// first or smallest divisor of any number is prime always 36-18-9-3-1     // 91-07-13
            {
                mp[i]++;
                v[] /= i;
            }
        }
        if (v[] > 1)
        {
            mp[v[]]++;
        }
    }

    ans = 0;
    for (auto &x : mp)
    {
        if (x.se >= 2)
        {
            n = (x.se / 2);
            ans += n;
            x.se -= n * 2;
            k += x.se;
        }
        else
        {
            k += x.se;
        }
    }
    ans += (k / 3);
    cout << ans;
}