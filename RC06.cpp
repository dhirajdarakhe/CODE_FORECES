
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int tbit(ll a)
{
    // cout<<(int)log2(a)+1<<endl;;
    return (int)log2(a) + 1;
}
int rightShift(int x, int y)
{
    // done rightshift
    ll ans1, ans2;
    ll totalbit = tbit(x);
    ans1 = (x >> y);
    ll p = 1 << (y);
    p--;
    ans2 = x & p;
    ans2 = (ans2 << abs((tbit(x) - y)));
    return (ans1 | ans2);
}
int leftShift(int x, int y)
{
    // done leftshift
    ll ans1, ans2;
    ll totalbit = tbit(x);
    ans1 = (x << y);
    ll p = 1 << (totalbit);
    p--;
    ans1 = ans1 & p;
    ans2 = (x >> abs((tbit(x) - y)));
    return (ans1 | ans2);
}
int main()
{
    ll a, b;
    cin >> a >> b;
    if (isPrime(a))
    {
        cout << leftShift(a, b);
    }
    else
    {
        cout << rightShift(a, b);
    }
    cout << "\n";

    return 0;
}
