#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v(a);
    vector<int> index(a);
    vector<int> ans;
    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
        index[i] = v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < a; i++)
    {
        if (b <= v[i])
        {
            ans.push_back(v[i]);
        }
        else if (ans.size() < c)
        {
            ans.push_back(v[i]);
        }
        else
        {
            break;
        }
    }
    for(auto x : ans){
        cout<<x<<endl;
    }
    return 0;
}
