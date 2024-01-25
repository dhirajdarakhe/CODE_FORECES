
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int t;
//     cin >>t;
//      for (int i = 1; i <= t; ++i)
//     {
//         cout << "Case #" << i << ":" << endl;
//         int x , y;
//         cin >> x >> y;
//         x *= 2;x++;
//         y *= 2;y++;
//         for (int j = 0; j < x; ++j)
//         {
//             for (int k = 0; k < y; ++k)
//             {
//                 if (j == 0 && (k == 1 || k == 0)) {
//                     cout << ".";
//                 } else if(j == 1 && (k == 1 || k == 0)) {
//                     cout << ".";
//                 }else if(j%2==0&&k%2==0){
//                     cout<<"+";
//                 }else if(j%2==0&&k%2!=0){
//                     cout<<"-";
//                 }else if(j%2!=0&&k%2==0){
//                     cout<<"|";
//                 }else if(j%2!=0&&k%2!=0){
//                     cout<<".";
//                 }
//             }cout<<endl;
//         }

//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t = 0;
//     cin >> t;
//     for (int i = 1; i <= t; i++)
//     {
//         int x;
//         cin >> x;
//         vector<int> v(x);
//         for (int i = 0; i < x; i++)
//         {
//             cin >> v[i];
//         }
//         sort(v.begin(), v.end());
//         int ans = 0;
//         for (int i = 1; i <= x; i++)
//         {
//             if (v[i - 1] >= )
//             {
//                 ans++;
//             }
//         }
//          cout << "Case #" << i << ": ";
//         cout<<ans<<endl;
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t = 0;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ": ";
        vector<ll> v1;
        vector<ll> v2;
        vector<ll> v3;
        vector<ll> v4;
        for (ll i = 1; i <= 12; ++i)
        {
            ll x;
            cin >> x;
            if (i == 1 || i == 5 || i == 9) {
                v1.push_back(x);
            } else if (i == 2 || i == 5 || i == 10) {
                v2.push_back(x);
            } else if (i == 3 || i == 7 || i == 11) {
                v3.push_back(x);
            }
            else if (i == 4 || i == 8 || i == 12) {
                v4.push_back(x);
            }
        }
        ll m1 = *min_element(v1.begin(), v1.end());
        ll m2 = *min_element(v2.begin(), v2.end());
        ll m3 = *min_element(v3.begin(), v3.end());
        ll m4 = *min_element(v4.begin(), v4.end());
        if ((m1 + m2 + m3 + m4) < 1e6) {
            cout << "IMPOSSIBLE"<<endl;
        }else{
            if(m1>=1e6){
                cout<<1e6<<" "<<0<<" "<<0<<" "<<0<<endl;
            }else if((m1+m2)>=1e6){
                cout<<m1<<" "<<1e6-(m1)<<" "<<0<<" "<<0<<endl;
            }else if((m1+m2+m3)>=1e6){
                cout<<m1<<" "<<m2<<" "<<1e6-(m1+m2)<<" "<<0<<endl;
            } else if((m1+m2+m3+m4)>=1e6){
                cout<<m1<<" "<<m2<<" "<<m3<<" "<<1e6-(m1+m2+m3)<<endl;
            }
        }

    }

    return 0;
}