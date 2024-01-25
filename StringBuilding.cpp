#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a = 0, b = 0, f = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a')
            {
                a++;
                if (b == 1)
                {
                    f = 0;
                    cout << "NO\n";
                    break;
                }
                else
                {
                    b = 0;
                }
            }
            else
            {
                b++;

                if (a == 1)
                {
                    f = 0;
                    cout << "NO\n";
                    break;
                }
                else
                {
                    a = 0;
                }
            }
        }if((a == 1 || b ==1) && f != 0){
            cout<<"NO\n";
        }
        else if(f){
            cout<<"YES\n";
        }
    }
    return 0;
}