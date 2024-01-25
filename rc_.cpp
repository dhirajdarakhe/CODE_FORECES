// of number


#include <bits/stdc++.h>
 
using namespace std;
// #define INT_BITS 32
int tbit(int a)
{
    // cout<<(int)log2(a)+1<<endl;;
    return (int)log2(a) + 1;
}
class gfg
{
     
/*Function to left rotate n by d bits*/
public:
int tbit(int a)
{
    // cout<<(int)log2(a)+1<<endl;;
    return (int)log2(a) + 1;
}
int leftRotate(int n, unsigned int d)
{
     
    /* In n<<d, last d bits are 0. To
     put first 3 bits of n at
    last, do bitwise or of n<<d
    with n >>(INT_BITS - d) */
    return (n << d)|(n >> (tbit(n) - d));
}
 
/*Function to right rotate n by d bits*/
int rightRotate(int n, unsigned int d)
{
    /* In n>>d, first d bits are 0.
    To put last 3 bits of at
    first, do bitwise or of n>>d
    with n <<(INT_BITS - d) */
    return (n >> d)|(n << (tbit(n) - d));
}
};
 
/* Driver code*/
int main()
{
    gfg g;
    int n = 19;
    int d = 6;
    cout << "Left Rotation of " << n <<
            " by " << d << " is ";
    cout << g.leftRotate(n, d);
    cout << "\nRight Rotation of " << n <<
            " by " << d << " is ";
    cout << g.rightRotate(n, d);
    getchar();
}
 