
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    vector<int> v;
    for (int i = 0; i < size; ++i)
    {  
        int k; cin >> k;
        v.push_back(k);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < size; ++i)
    {  
        cout<<v[i]<<" ";
    }cout<<endl;
    bool flag = false;
    int j;
    for ( j = 0; j < size; j++)
    {   
        cout<<(j != v[j])<<endl;
        if (j != v[j]) {
            flag = true;
            break;
        }
    }
    cout<<"."<<j<<endl;
    if (j & 1) {
        cout << "1\n";
    } else {
        cout << "0\n";
    }
    return 0;
}