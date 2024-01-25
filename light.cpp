// #include <bits/stdc++.h>
// using namespace std;
// int v[5][5];
// int ans[5][5];
// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             v[i][j] = 1;
//             ans[i][j] = 1;
//         }
//     }
//     for (int i = 1; i < 4; i++)
//     {
//         for (int j = 1; j < 4; j++)
//         {
//             cin >> v[i][j];
//         }
//     }
//     for (int i = 1; i < 4; i++)
//     {
//         for (int j = 1; j < 4; j++)
//         {
//             if (v[i][j] & 1)
//             {
//                 if (ans[i][j] == 0)
//                     ans[i][j] = 1;
//                 else
//                     ans[i][j] = 0;

//                 if (ans[i][j + 1] == 0)
//                     ans[i][j + 1] = 1;
//                 else
//                     ans[i][j + 1] = 0;

//                 if (ans[i][j - 1] == 0)
//                     ans[i][j - 1] = 1;
//                 else
//                     ans[i][j - 1] = 0;

//                 if (ans[i + 1][j] == 0)
//                     ans[i + 1][j] = 1;
//                 else
//                     ans[i + 1][j] = 0;

//                 if (ans[i - 1][j] == 0)
//                     ans[i - 1][j] = 1;
//                 else
//                     ans[i - 1][j] = 0;
//             }
//         }
//     }
//     for (int i = 1; i < 4; i++)
//     {
//         for (int j = 1; j < 4; j++)
//         {
//             cout<< ans[i][j];
//         }
//         cout << endl;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    int x11, x12, x13, x21, x22, x23, x31, x32, x33;
    cin >> x11 >> x12 >> x13 >> x21 >> x22 >> x23 >> x31 >> x32 >> x33;
    cout << ((x11 + x12 + x21) % 2 == 0 ? "1" : "0")
         << ((x11 + x12 + x13 + x22) % 2 == 0 ? "1" : "0")
         << ((x12 + x13 + x23) % 2 == 0 ? "1" : "0") << endl;
    cout << ((x11 + x21 + x22 + x31) % 2 == 0 ? "1" : "0")
         << ((x12 + x21 + x22 + x23 + x32) % 2 == 0 ? "1" : "0")
         << ((x13 + x22 + x23 + x33) % 2 == 0 ? "1" : "0") << endl;
    cout << ((x21 + x31 + x32) % 2 == 0 ? "1" : "0")
         << ((x22 + x31 + x32 + x33) % 2 == 0 ? "1" : "0")
         << ((x23 + x32 + x33) % 2 == 0 ? "1" : "0") << endl;
    return 0;
}