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
ll binaryExpoRRec(ll a, ll b)
{
    if (b == 0)
        return 1 * 1ll;
    ll res = binaryExpoRRec(a, b / 2);
    if (b & 1)
    {
        return a * res * res;
    }
    return res * res;
}
vector<string> fg(string nums)
{
    ll n = nums.size();
    vector<string> subset;
    ll subsets_ct = binaryExpoRRec(2, 59);
    ; // total number of set can be ganerated from array of size n is subsets_ct - 1;
    for (ll mask = 0; mask < subsets_ct; ++mask)
    {
        string k = "";

        for (ll i = 0; i < 59; ++i)
        {
            if ((mask & (1 << i)) != 0)
            {
                k += nums[i];
            }
            else
            {
                k += '0';
            }
        }
        // cout<<k<<" "<<sz(k)<<nl;;
        if (count(all(k), '1'))
            subset.pb(k + "0000");
        if (sz(subset) >= 40010)
            break;
    }
    // cout << sz(subset) << nl;
    //  for(auto x: subset) cout<<x<<" "<<sz(x)<<nl;
    return subset;
}
ll binaryToDecimal(string n)
{
    string num = n;
    ll dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    ll base = 1;

    ll len = num.length();
    for (ll i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }

    return dec_value;
}
vector<string> k;
signed main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s = "111111111111111111111111111111111111111111111111111111111110000";
    k = fg(s);
    int t = 1;
    cin >> t;
    forsn(i, 1, t + 1)
    {
        // cout << 'Case #' << i << ': ';
        solution();
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
bool isValidPlace(int x, int y, int row, int colu) { return (x >= 0 && y >= 0 && x < row && y < colu); }
// len-1-i
// ll msb = (int)(log2(i));
ll dtod(int x, int y, int colu) { return (x * colu) + y; }

void solution()
{
    // ll mn = 2e18;
    // ll mx = -1*2e18;
    // map <ll,ll> mp;
    // ll a = 0,b = 0,m = 0,n = 0,k = 0,ans = 0;
    // ll len = 0; cin >> len; string s; cin >> s;
    // cin >> a;
    // v64 v(a);
    // forn(i ,a) cin >> v[i];
    // long long v = binaryExpoRRec(2, 59);
    // cout << v;
    // forn(i, 40000)
    // {
    //     cout << k[i] << " " << (binaryToDecimal(k[i]) ^ binaryToDecimal(k[i])) << nl;
    // }
    ll a, b;
    cin >> a >> b;
    vector<vector<ll>> ans(a, v64(b, 0));
    forn(i, a)
    {
        forn(j, b)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                    ans[i][j] = 9;
                else
                    ans[i][j] = 12;
            }
            else
            {
                if (j % 2 == 0)
                    ans[i][j] = 6;
                else
                    ans[i][j] = 3;
            }
        }
    }

    ll l = 0;
    for (ll i = 0; i < a; i += 2)
    {
        for (ll j = 0; j < b; j += 2)
        {
            if (isValidPlace(i, j, a, b))
                ans[i][j] += binaryToDecimal(k[l]);
            if (isValidPlace(i + 1, j, a, b))
                ans[i + 1][j] += binaryToDecimal(k[l]);
            if (isValidPlace(i, j + 1, a, b))
                ans[i][j + 1] += binaryToDecimal(k[l]);
            if (isValidPlace(i + 1, j + 1, a, b))
                ans[i + 1][j + 1] += binaryToDecimal(k[l]);
            ++l;
        }
    }
    cout << a * b << nl;
    forn(i, a)
    {
        forn(j, b)
        {
            cout << ans[i][j] << " ";
        }
        cout << nl;
    }
    // cout << (ans[0][0] ^ ans[1][1] ^ ans[0][1] ^ ans[1][0]) << nl;
    // cout<< (1^2^4^8)<<nl;
}


int *v;
// v -- >  addres of int veri

int arr[10];
cout<<arr<<" ";

22/10=2

1 -> 15
2 -> 14
3 -> 38
4 -> 78
5 -> 

2
3
4
5
1
2

inti = 2;
len = 5;
(2+0)%5=2
(2+1)%5=3
(2+2)%5=4
(2+3)%5=0
(2+4)%5=1

//R   B  

// 32 64   32 


// 16 32    16
// 8 16    8
// 4 8    4
// 2 4   2
// 1 2   1


