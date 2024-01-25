
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     string size;
//     cin >> size;
//     bool correct = false;
//     for (int i = 0; i < size.length(); i++)
//     {
//         if (isdigit(size[i]) == false)
//         {
//             correct = false;
//             break;
//         }
//         correct = true;
//     }
//     stringstream num(size);
//     int j2 = 0;
//     num >> j2;
//     if (correct == false || j2 > 100000 || j2 < 1)
//     {
//         cout << "INVALID INPUT";
//         return 0;
//     }
//     set<int> v;
//     for (int i = 0; i < j2; ++i)
//     {
//         string x;
//         cin >> x;
//         bool crt = false;
//         for (int i = 0; i < x.length(); i++)
//         {
//             // cout << x[i] << "/.\n";
//             if (int(x[i]) != 32)
//             {   cout << x[i] << "aa\n";
//                 if (isdigit(x[i]) == false)
//                 {
//                     crt = false;
//                     break;
//                 }
//             }
//             crt = true;
//             // cout << x << "/\n";
//         }
//         stringstream num1(x);
//         int j1 = 0;
//         num1 >> j1;
//         if (crt == false || j1 > 1000000 || j1 < 1)
//         {
//             cout << "INVALID INPUT";
//             return 0;
//         }
//         v.insert(j1);
//     }
//     // sort(v.begin(), v.end());
//     bool flag = false;
//     int j = 0;
//     ;

//     for (auto a : v)
//     {
//         if (j != a)
//         {
//             flag = true;
//             break;
//         }
//         j++;
//     }

//     if (j & 1)
//     {
//         cout << "1\n";
//     }
//     else
//     {
//         cout << "0\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#define N 100000
using namespace std;

bool validInput(int n)
{
    string str = to_string(n);
    bool correct = false;
    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]) == false)
        {
            correct = false;
            break;
        }
        correct = true;
    }
    return correct;
}

int main()
{
    int size;
    int count = -1, flag = 0;
    cin >> size;
    if (validInput(size) == true && (size > 0 && size < N))
    {
        set<int> arr;
        string element;
        for (int i = 0; i < size; i++)
        {
            cin >> element;
            bool correct = false;
            for (int i = 0; i < element.length(); i++)
            {
                if (isdigit(element[i]) == false)
                {
                    correct = false;
                    break;
                }
                correct = true;
            }
            if (correct)
            {
                stringstream num(element);
                int j = 0;
                num >> j;
                arr.insert(j);
            }
            else
            {
                cout << "INVALID INPUT";
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            bool flag = false;
            int j = 0;
            for (auto a : arr)
            {    cout<<a<<endl;
                if (j != a)
                {
                    flag = true;
                    break;
                }
                j++;
            }
            cout << " mex " << j << endl;
            if (j % 2 == 0)
            {
                cout << 0;
            }
            else
            {
                cout << 1;
            }
        }
    }
    else
    {
        cout << "INVALID INPUT";
    }
    return 0;
}
