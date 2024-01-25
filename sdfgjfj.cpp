#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        vector<int> v(a);
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<int>());
        int ans = v[0];
        bool flag = true;
        for (int i = 1; i < a; i++)
        {
            ans = abs(ans - v[i]);
            if (ans >= 2 && abs(v[i]-v[i-1]) >= 2)
            {
                flag = false;
                break; 
            }
        }
        if (a == 1 && v[0] == 1)
        {
            cout << "YES\n";
        }
        else if (a == 1 && v[0] > 1)
        {
            cout << "NO\n";
        }
        else if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}