/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve()
{
    int n, g, k;
    cin >> n >> g >> k;
    if ((((k - 1) / 2) * n) >= (k * g))
    {
        cout << k * g << endl;
        return;
    }
    int ans = 0;
    ans += (((k - 1) / 2) * (n - 1));
    int m = ((k * g) - ans);
    if ((m % k) >= ((k + 1) / 2))
        ans -= (k - m % k);
    else
        ans += (m % k);
    cout << ans << endl;
    return;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}