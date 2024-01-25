

#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve();
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
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("error.txt", "w", stderr);
    // freopen("output.txt", "w", stdout);
    // #endif
    int t = 1;
    /*is Single Test case?*/ cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    // cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    return 0;
}
void solve()
{

    ll len;
    cin >> len;
    string s;
    cin >> s;
    ll p;
    cin >> p;
    vector<char> c(p);
    for (int i = 0; i < p; i++)
    {
        cin >> c[i];
    }
    for (int j = 0; j < p; j++)
    {
        for (int i = 0; i < len; ++i)
        {
            if (c[j] == s[i])
            {    
                s[i] = '0';
            }
        }
    }
    // vector<ll> ans;
    int mx = INT_MIN;
    int ctr = 0;
    for (int i = 0; i < len; ++i)
    {
        if (s[i] == '0')
        {
            // ans.push_back(ctr);
            mx = max(mx,ctr);
            ctr = 1;
        }
        else
        {
            ctr++;
        }
    }
    if(mx == INT_MIN) cout<<0;
    else cout<<mx;
    // cout << *max_element(ans.begin(), ans.end());
}