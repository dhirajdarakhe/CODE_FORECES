#include <bits/stdc++.h>
using namespace std;
#define ll long long
// HII
// this is dsqure
class frd
{
    int x;

public:
    int z;
    frd(int x1, int z1)
    {

        x = x1;
        z = z1;
    }
    ~frd()
    {
        cout << "Called"<< x<<endl;;
    }
};

int main()
{
    frd *f1 = new frd(1, 14);
    // delete f1;
    cout << "DHI\n";
    frd f2(2, 14);
    delete f1;
    return 0;
}