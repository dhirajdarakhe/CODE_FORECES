#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v1.push_back(a);
        v2.push_back(b);
        v3.push_back(c);
    }

    if (accumulate(v1.begin(), v1.end(), 0) == 0 && accumulate(v2.begin(), v2.end(), 0) == 0 && accumulate(v3.begin(), v3.end(), 0) == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}