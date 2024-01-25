#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
//     ios_base::sync_with_stdio(false); cin.tie(NULL);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("error.txt", "w", stderr);
//     freopen("output.txt", "w", stdout);
// #endif

    int t = 1;
    /*is Single Test case?*/cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    // cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
void solve()
{
    int size;
    cin >>size;
    vector<int> v(size);
    for (int i = 0; i < size; ++i)
    {
        cin >> v[i];
    }
    int a = v[0] , b = v[size -1];
    int ans1 = 0 ;
    int i = 1 , j = size - 2; int i2 = 0, i1 = 0;
    while (i <= j) {
        if (a > b) {
            b += v[j]; j--;
        } else if (a < b)  {
            a += v[i]; i++;
        }
        // cout<<a<<" "<<b<<endl;
        if (a == b) {
            ans1 = a;b += v[j];j--;
        }
    }
    if(ans1!=0)cout<<i+(size-2-j);
    else cout<<0;
}