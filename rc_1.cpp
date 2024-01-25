#include <bits/stdc++.h>
using namespace std;

int string_to_i(string str){
    return stoi(str);
}

string int_to_s(int num){
    string str=to_string(num);
}

int main()
{
    int size;
    cin >> size;
    set<int> v;
    for (int i = 0; i < size; ++i)
    {
        int x;
        cin >> x;
        v.insert(x);
    }
    int j = 0;
    bool flag = false;
    for (auto a : v)
    {
         cout<<a<<endl;
        if (j != a)
        {
            flag = true;
            break;
        }
        j++;
    }
    cout<<j<<endl;
    if (j & 1)
    {
        cout << "1\n";
    }
    else
    {
        cout << "0\n";
    }
    return 0;
}
