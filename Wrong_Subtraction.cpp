#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t = 0, k = 0;
    cin >> t >> k;
    while (k--)
    {
        if (t % 10 != 0)
        {
            t -= 1;
        }
        else
        {
            t /= 10;
        }
        // cout<<t;
    }
    cout << t;

    return 0;
}