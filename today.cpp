#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t = 0;
    cin >> t;
    while (t--)
    {
        long long a;
        cin >> a;
        if (a % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            while (a % 2 == 0)
            {
                a /= 2;
            }
            if (a == 1)
            {
                cout << "NO" << endl;
            }
            else
            {   
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}