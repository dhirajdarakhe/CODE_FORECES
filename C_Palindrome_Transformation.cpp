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
    ll len = 0;
    cin >> len >> k;
    string s;
    cin >> s;
    ll left = 0;
    ll right = len - 1;
    v64 abc(30);
    forsn(i, 1, 27)
        abc[i] = i;
    if (k > len / 2)
    {
        reverse(all(s));
        k = len - k + 1;
    }
    k--;
    ll l1 = -1;
    ll r1 = -1;
    while (left < right)
    {
        if (s[left] != s[right])
        {
            if (k > left && l1 == -1)  l1 = left;
            if (left > k)  r1 = left;
            ll i = s[left] - 'a' + 1;
            ll j = s[right] - 'a' + 1;
            ll a1 = 0;
            ll a2 = 0;
            while (abc[i] != abc[j])
            {
                i++;
                if (i == 27)   i = 1;
                a1++;
            }
            i = s[left] - 'a' + 1;
            while (abc[i] != abc[j])
            {
                i--;
                if (i == 0)   i = 26;
                a2++;
            }
            ans += min(a1, a2);
        }
        left++;
        right--;
    }
    if (l1 != -1 && r1 != -1)
    {
        ll ans1 = abs(k - l1);
        ll ans2 = abs(k - r1);
        if (ans1 < ans2)
            swap(ans1, ans2);
        ans += ans1 + (2 * ans2);
        cout << ans;
        return;
    }
    if (l1 != -1)
        ans += abs(k - l1);
    if (r1 != -1)
        ans += abs(k - r1);
    cout << ans;
}