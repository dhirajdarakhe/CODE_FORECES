#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    string s = "";
    int a = 0, b = 0;
    cin >> t;
    cin >> s;
    for (int i = 0; i < t; i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    if (a == b)
    {
        cout << "Friendship";
    }
    else if (a > b)
    {
        cout << "Anton";
    }
    else
    {
        cout << "Danik";
    }
    return 0;
}