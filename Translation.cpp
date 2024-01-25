#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "", s2 = "";
    cin >> s1 >> s2;
    int flage = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[s1.size() - 1 - i])
        {
            flage = 1;
        }
    }
    if (flage == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}