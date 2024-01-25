#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int count = a;
        int loop = a;
        int fa = 0;
        while (count--)
        {
            loop = count + 1;
            if (b % loop == 0)
            {
                int v = (b / loop);
                if((a - loop + 1) >= v){
                    fa = 1;

                    break;
                }
            }
            if(fa){
                cout<<"yes"<<endl;
            }else{
                cout<<"no"<<endl;
            }
        }
    }
    return 0;
}