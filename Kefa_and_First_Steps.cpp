#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin >> s;
    vector<int> v(s);
    vector<int> ans;
    int j = 1;
    for (int i = 0; i < s; i++)
    {
        cin >> v[i];
        if (i != 0 && v[i - 1] <= v[i])
        {
            j++;
        }
        else if (i != 0 && v[i - 1] > v[i])
        {
            ans.push_back(j);
            j = 1;
        }
        if (i == s-1)
        {
            ans.push_back(j);
        }
    }
    cout << *max_element(ans.begin(), ans.end());
    return 0;
}