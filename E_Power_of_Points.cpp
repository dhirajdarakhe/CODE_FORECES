#include <bits/stdc++.h>
using namespace std;
#define ll long long
// HII
// this is dsqure
int main()
{
    int n;
    cin >> n;
    int ans1 = 3;
    int ans2 = 3;
    int res = 1;
    for (int i = 1; i <= (n / 2); ++i)
        res *= 2;
    if (n == 2)
    {
        cout << 6;
        return 0;
    }
    int ans = (ans1 * res) + (ans2 * (res / 2));
    cout << ans;
    return 0;
}
// 2 6                          
// 4 18
// 6 56