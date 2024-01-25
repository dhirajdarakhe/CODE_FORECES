#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "";
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            count++;
        }
    }
    string n = to_string(count);
    int flag = 0;
    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] == '4' || n[i] == '7')
        {
            flag = 1;
        }
      
    }
    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}