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
map<int, vector<vector<int>>> findDiagonalOrder(vector<vector<int>> &mat)
{
    map<int, vector<vector<int>>> res;
    int i = 0, j = 0, n = mat.size(), m = mat[0].size(), add = -1;
    res.push_back(mat[i][j]);
    while (i < n - 1 || j < m - 1)
    {
        if (j < m - 1 && ((i == 0 && add == -1) || (i == n - 1 && add == 1)))
        {
            ++j;
            add = -add;
        }
        else if ((j == 0 && add == 1) || (j == m - 1 && add == -1))
        {
            ++i;dj
            
            add = -add;
        }
        else
        {
            i += add;
            j -= add;
        }
    }
    return res;
}
void solution()
{
    // int mn = 2e18;
    // int mx = -1*2e18;
    map<int, int> mp;
    int a = 0, b = 0, m = 0, n = 0, k = 0, ans = 0;
    cin >> a >> b;
    vector<vector<int>> v(a, vector<int>(b, 0));
    forn(i, a) forn(j, b) cin >> v[i][j];
    map<int, vector<vector<int>>> res =  findDiagonalOrder(v);
    for(auto x : res) if(x.se.size() == 2) 
}
