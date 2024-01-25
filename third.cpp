#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        unordered_map<int, int> s(size);
        for (int i = 0; i < size; i++)
        {
            int a;
            cin >> a;
            s[a]++;
        }
        vector<int> v;
        int a0 = 0, na = 0;
        for (auto p : s)
        {
            if (p.first == 0)
            {
                a0++;
            }
            else
            {
                na++;
            }
        }
        cout << max(a0, na) <<endl;
    }
    return 0;
}