// #include <bits/stdc++.h>
// using namespace std;
// const int M = 1e9 + 7;
// int binaryExpo(int a, int b, int m)
// {
//     int ans = 1;
//     while (b)
//     {
//         if (b & 1)
//             ans = (ans * 1ll * a) % m;
//         a = (a * 1ll * a) % m;
//         b >>= 1;
//     }
//     return ans;
// }
// int facto(int n, int M)
// {
//     int ans = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         ans = (ans * i * 1ll) % M;
//     }
//     return ans;
// }
// int main()
// {

//     // 1 ) using fermet littel theorem

//     // condition
//     // > gcd(a,m) = 1;
//     // > m should be prime number only
//     // int a = 2;
//     // int m = 5;
//     // cout<<binaryExpo(a,m-2,m);  // MMI of 2 under modulo 5 is 3

//     // Q there are n children
//     // and we need to select k student under modulo (M) 1e9+7
//     // order of selected sudent doen't matter
//     // ans > { n ! / (n - k )! * ( k ) !} % M
//     int n, k;
//     cin >> n >> k;
//     n = facto(n, M);
//     int n_k = facto(n - k, M);
//     k = facto(k, M);
//     int denomenator = (n_k * 1ll * k) % M;
//     int ans = (n * binaryExpo(denomenator, M - 2, M)) % M;
//     cout << ans << endl;

//     return 0;
// }

// Q  // https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/name-count/
//
#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define ll long long

ll binaryMultplication(ll a, ll b)
{

    ll ans = 0;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans + a) % M;
        }
        a = (a + a) % M;
        b = b >> 1;
    }
    return ans;
}
ll binaryExpo(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
            ans = binaryMultplication(ans, a) % M;
        a = binaryMultplication(a, a) % M;
        b >>= 1;
    }
    return ans;
}
ll facto(ll n)
{
    if (n == 0)
        return 1;
    ll ans = 1;
    for (ll i = 1; i <= n; i++)
    {
        ans = binaryMultplication(ans, i) % M;
    }
    return ans % M;
}
int main()
{
    ll t = 0;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll k1 = facto(k);
        ll n1 = facto(k - n);
        // cout << k1 << " " << n1 << endl;
        ll deno = binaryExpo(n1, M - 2);
        cout << (k1 * deno * 1ll) % M << endl;
    }
    return 0;
}





// // ******** >>> EXREDND EUCLID THEOREM <<<<<<<<<<<


// if  M is Prime then 
// long long int d, z, y;
// void extendedEuclid(long long int c, long long int m)
// {
// 	if (m == 0)
// 	{
// 		d = c;
// 		z = 1;
// 		y = 0;
// 	}
// 	else
// 	{
// 		extendedEuclid(m, c % m);
// 		long long int temp = z;
// 		z = y;
// 		y = temp - (c / m) * y;
// 	}
// }
// long long int modInverse(int c, int M)
// {
// 	extendedEuclid(c, M);
// 	return (z % M + M) % M;
// }