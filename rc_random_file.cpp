#include <bits/stdc++.h>
using namespace std;

int main()
{
    fstream f;
    f.open("samle.txt", ios::out);
    srand(time(0));
    {
        cout << endl;
        vector<int> p;
        int i = 0;
        // while (i < 6e4)
        // {
        //     int m = rand();
        //     p.push_back(m);
        //     i++;
        // }
        // // cout << s.size() << endl;
        for (int i = 0; i < 100000; i++)
        {
                p.push_back(i);
                
        }

        // cout << " \n\n\n";
        random_shuffle(p.begin(), p.end());
        for (auto a : p)
        {   
            // cout << a<< " ";
            f << a << " ";
        }
        // cout << " \n";
    }
    return 0;
}