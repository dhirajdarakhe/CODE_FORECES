
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define all(x) (x).begin(), (x).end()
typedef vector<ll> v64;
typedef vector<int> v32;
#define fast_DHIraj()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
void dhiraj();
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
int main()
{
    fast_DHIraj();
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("error.txt", "w", stderr);
    // freopen("output.txt", "w", stdout);
    // #endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        dhiraj();
        // cout << "\n";
    }
    return 0;
}
// / sum that are parallel to main diagonal
int maxDiagonalSum(vector<vector<int> > arr, int N)
{
    int maxSum = 0;
    for (int i = 0; i < N; i++) {
        int row = 0, col = i;
        int sum1 = 0, sum2 = 0;
        while (col < N && row < N) {
            sum1 += arr[row][col];
            sum2 += arr[col][row];
            row++;
            col++;
        }
        maxSum = max({ sum1, maxSum, sum2 });
    }    return maxSum;
}
void dhiraj()
{
    ll a, b;
    cin >> a >> b;
    v32 v(a);
    ll sum = 0;
    forn(i, a) { cin >> v[i]; sum += v[i];}
    sort(all(v), greater<int>());
    v32 v1(a);
    v1[0] = v[0];
    forsn(i, 1, a) {
        v1[i] = (v1[i - 1] + v[i]);
    }
    vector<ll> b1(sum+5); ll m = 0;
    for(ll i = 0; i <= sum ; ++i){
        if (i <= v1[m]) { b1[i] = m+1;}
        else {
            m++;
            b1[i] = m+1;
        }
    }
    forn(i , b) {
        ll x;
        cin >> x;
        if (sum == x) {
            cout << a << "\n";
        } else if (sum < x) {
            cout << -1 << "\n";
        } else if (x <= v1[0]) {
            cout << 1 << "\n";
        }
        else {
            cout << b1[x]<<"\n";
        }
    }


}