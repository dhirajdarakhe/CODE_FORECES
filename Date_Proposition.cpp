#include <bits/stdc++.h>
using namespace std;
#define ll long long

int f(vector<int> &v, vector<vector<int>> &dp, int i, int n, int ans, int res)
{
    if (i == n)
    {
        if (res == ans)
            return 1;
        else
            return 0;
    }
    if (dp[i][res] != -1)
        return dp[i][res];
    int tk = f(v, dp, i + 1, n, ans, (res | v[i]));
    int ntk = f(v, dp, i + 1, n, ans, res);
    dp[i][res] = tk + ntk;
    return dp[i][res];
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int mxOR = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        mxOR = (mxOR | v[i]);
    }
    vector<vector<int>> dp(n + 1, vector<int> (mxOR+10, -1));
    int k = 0;
    int ans = f(v, dp, 0, n, mxOR, k);
    cout << ans;

    // int M[n][32] = {0};
    // for (int i = 0; i < n; ++i)
    // {
    //     for (int j = 31; j >= 0; --j)
    //     {
    //         if (v[i] & 1)
    //             M[i][j] = 1;
    //         else
    //             M[i][j] = 0;
    //         v[i] = v[i] >> 1;
    //     }
    // }
    // int ans = 1;
    // for (int i = 0; i < 32; ++i)
    // {
    //     int len = 0;
    //     for (int j = 0; j < n; ++i)
    //     {

    //         len += M[j][i];
    //         ans = max(ans, len);
    //         if(!M[i][j]) len = 0;
    //     }
    //     // ans = max(ans, len);
    // }
    // cout << ans;
    return 0;
}

// 1 1 0 1 1
// 1 0 0 1 0
// 1 0 1 1 1
// 0 1 1 1 1
// 0 0 1 1 1
// 1 1 1 1 1

// 1
// 3