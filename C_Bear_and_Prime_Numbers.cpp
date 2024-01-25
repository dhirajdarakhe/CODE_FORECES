
#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    // Write your code here

    int n = 0, m = 0;
    cin >> n >> m;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    vector<ll> w(m);
    for (int i = 0; i < m; ++i)
        cin >> w[i];
    map<ll, ll> mp;
    for (int i = 0; i < n; ++i)
        mp[v[i]] = 1;
    map<ll, ll> mp2;
    for (int i = 1; i <= n; ++i)
        mp2[i] = 1;
    for (int i = 0; i < m; ++i)
    {
        ll x = w[i];
        if (v[x - 1] == 0)
        {
            mp[w[i]] = -1;
            mp2[w[i]] = -1;
            continue;
        }
        while (x - 1 >= 0 && mp[v[x - 1]] == 1)
        {
            x = v[x - 1];
        }
        mp[x] = -1;
        mp2[x] = -1;
    }

    for (auto x : mp2)
    {
        if (x.first <= n && x.second != -1)
            cout << x.first << " ";
    }
    return 0;
}