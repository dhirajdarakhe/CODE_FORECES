#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1 = "hello";
    cin >> s;
    int ans = 0;
    string as = "";
    for (int i = 0; i < s1.size(); i++)
    {
        for (int j = ans; j < s.size(); j++)
        {
            if (s1[i] == s[j])
            {
                ans = j;
                ans++;
                as += s[j];
                // cout<<ans<<" "<<as<<endl;
                break;
            }
        }
    }
    // cout<<as<<endl;
    if (as == "hello")
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}