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
int dfs(int node, map<int, int> &mp, vector<int> &visi, vector<vector<int>> &gp, int p, int &fg)
{
    cout << node << " ";
    mp.erase(node);
    visi[node]++;
    for (auto x : gp[node])
    {
        if (visi[x])
        {
            if (x != p)
            {
                fg = 1;
                return 0;
            }
            if (x == p)
                continue;
        }
        return dfs(x, mp, visi, gp, node, fg);
    }
}
void solution()
{
    // int mn = 2e18;
    // int mx = -1*2e18;
    int a = 0, b = 0, m = 0, n = 0, k = 0, ans = 0;
    cin >> n;
    vector<vector<int>> gp(n + 10);
    forn(i, n - 1)
    {
        cin >> a >> b;
        gp[a].pb(b);
        gp[b].pb(a);
    }
    v64 open;
    for (int i = 1; i <= n; ++i)
    {
        if (sz(gp[i]) == 1)
        {
            open.pb(i);
            ans++;
        }
    }
    // cout<<nl;
    // int last = 0;
    // vector<int> visi(n + 1, 0);
    // map<int, int> mp;
    // for (int i = 1; i <= n; ++i)
    //     mp[i]++;
    // int fg = 0;
    // dfs(open[0], mp, visi, gp, -1, fg);
    // last++;
    // cout << "mp : ";
    // for (auto x : mp)
    //     cout << x.fi << " ";
    // int i = 1;
    // cout << nl;
    // // cout<<open[1]<<endl;
    // while (mp.size())
    // {
    //     fg = 0;
    //     if(visi[open[i]])
    //     {
    //         cout<<open[i]<<" "<<i <<" " <<mp.size()<<endl;
    //         i++;
    //         continue;
    //     }
    //     cout<<open[i]<<" "<<" start : ";
    //     dfs(open[i], mp, visi, gp, -1, fg);
    //     i++;
    //     // dfs(mp.begin()->first, mp, visi, gp, -1, fg);
    //     if (fg)
    //         ans++;
    //     else
    //         last++;

    //     cout << "mp : ";
    //     for (auto x : mp)
    //         cout << x.fi << " ";
    //     cout << nl;
    // }
    ans = (ans / 2) + (ans % 2);
    cout<<ans;
}