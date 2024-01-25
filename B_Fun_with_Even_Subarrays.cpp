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
// ll binaryExpoRRec(ll a, ll b) {if (b == 0) return 1 * 1ll;ll res = binaryExpoRRec(a, b / 2);if (b & 1) {return a * res * res;} return res * res;}
// vector<int> prime(10000000, 1);
// void isPrime(){int c = 0;for (int p = 2; p * p <= 10000000; p++) if (prime[p] == 1)for (int i = p * 2; i <= 10000000; i += p){prime[i] = 0;}}
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
    // Hii Dhiraj ,
	int a;
	cin >> a;
	v64 v(a);
	forsn(i, 0, a)cin >> v[i];
	reverse(all(v));
	ll ans = 0;
	ll last = v[0];
	for (int i = 1; i < a;) {
		if (v[i] != last) {
			i *= 2;
			ans++;
		} else {
			i++;
		}
	}
	cout << ans ;
}
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int tc;
//     cin >> tc;
//     while(tc--)
//     {
//         int n;
//         cin >> n;

//         vector<int> a(n+1);
//         for(int i=1; i<=n; i++)
//             cin >> a[i];

//         vector<int> b = a;
//         reverse(b.begin()+1,b.end());

//         int ans = 0, x = 1;

//         while( x < n )
//         {
//             if( b[x+1] == b[1] ){
//                 x ++;
//                 continue;
//             }
//             ans ++;
//             x *= 2;
//         }

//         cout << ans << '\n';
//     }

//     return 0;
// }