#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0, j = 0, k = 0, l = 0;
    int t;
    cin >> t;
    l = t % 10;
    t /= 10;
    k = t % 10;
    t /= 10;
    j = t % 10;
    t /= 10;
    i = t % 10;
    t /= 10;
    l++;
    while (i == j || i == k || i == l || j == k || j == l || k == l)
    {
        if (l != 9)
        {
            l++;
        }
        else
        {
            l = 0;
            k++;
            if (k == 10)
            {
                k = 0;
                j++;
                if (j == 10)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
    cout << i << j << k << l;
    return 0;
}