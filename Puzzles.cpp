#include <bits/stdc++.h>
using namespace std;
int main()
{
    int diff, size;
    cin >> diff >> size;
    vector<int> q(size);
    vector<int> ans;
    for (int i = 0; i < size; i++)
    {
        cin >> q[i];
    }
    sort(q.begin(), q.end());
    diff--;
    for (int i = 0; i < size; i++)
    {
       
        ans.push_back(q[i + diff] - q[i]);
         if (i + diff == size - 1)
        {
            break;
        }
    }
    cout << *min_element(ans.begin(), ans.end());
    return 0;
}