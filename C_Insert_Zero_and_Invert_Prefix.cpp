

#include <bits/stdc++.h>
using namespace std;
#define int long long
// HII
// this is dsqure
signed main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int a = 0, b = 0, m = 0, n = 0, k = 0, ans = 0;
        cin >> a;
        vector<int> v(a);
        forn(i, a) cin >> v[i];
        if (count(all(v), 1) == a || v[a - 1] == 1)
        {
            cout << "NO";
            return;
        }
        cout << "YES\n";
        int k10 = 1;
        int k01 = 0;
        vector<int> w;
        for (int i = a - 1; i > 0; --i)
        {
            if (k10 == 1)
            {
                if (v[i - 1] == 1 && v[i] == 0)
                {
                    w.pb(i);
                    swap(k10, k01);
                }
            }
            else if (k01 == 1)
            {
                if (v[i - 1] == 0 && v[i] == 1)
                {
                    w.pb(i);
                    swap(k10, k01);
                }
            }
        }
        while (sz(w) != sz(v))
            w.pb(0);
        reverse(all(w));
        for (auto x : w)
            cout << x << " ";
    }
    return 0;
}