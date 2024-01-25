#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > 10)
        {
            while (b--)
            {
                a = (a / 2) + 10;
            }
            // cout << a << endl;
            a = a - (c * 10);
            // cout << a << endl;
            if (a <= 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            // cout << a << endl;
            a = a - (c * 10);
            // cout << a << endl;
            if (a <= 0)
            {
                cout << "YES" << endl;
               
            }
            else
            {

                while (b--)
                {
                    a = (a / 2) + 10;
                }

                if (a <= 0)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}
