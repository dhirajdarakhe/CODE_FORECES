
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
        cout << "\n";
    }
    return 0;
}
void dhiraj()
{
    ll ts, le;
    cin >> ts >> le;
    vector<string> v(ts);
    for (int i = 0; i < ts; ++i)
    {
        cin >> v[i];
    }
    vector<string> dhiraj;
    for (int i = 0; i < le; ++i)
    {
        string ans = "";
        string d = "";
        for (int j = ts - 1; j >= 0; --j)
        {
            ans += v[j][i];
            d += ".";
        }
        // cout << ans ;
        int a = 0;
        for (int j = 0; j < ans.size(); ++j)
        {
            if (ans[j] == 'o')
            {
                swap(d[j], ans[j]);
                a = j + 1;
            }
            if (ans[j] == '*')
            {
                // cout<<"dhiraj2";
                swap(d[a], ans[j]);
                a++;
            }
        }
        // cout<<" "<<d<<endl;
        dhiraj.push_back(d);
    }
    // cout<<endl;
    // vector<string> last;
    for (int i = ts - 1; i >= 0; --i)
    {
        string ans = "";
        for (int j = 0; j < le; ++j)
        {
            ans += dhiraj[j][i];
        }
        //    last.push_back(ans);
        cout << ans << endl;
        ;
    }
    // cout<<endl;
    // reverse(all(last));
    // for(auto x: last){
    //     cout<<x<<'\n';
    // }
}
// ..........
// ...*....*.
// .*.o....o.
// .*........
// .*......**
// .o.*....o

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
    // freopen('input.txt', 'r', stdin);
    // freopen('error.txt', 'w', stderr);
    // freopen('output.txt', 'w', stdout);
    // #endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        dhiraj();
        cout << '\n';
    }
    return 0;
}
void dhiraj()
{
    // ll a;
    // cin>>a;
}