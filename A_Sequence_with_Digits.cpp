#include <bits/stdc++.h>
using namespace std;
// #define ll long long
// //HII
// //this is dsqure
// int main()
// {
//   return 0;
// }
class base
{
public:
    virtual void fun_1() { cout << "base-1\n"; }
    virtual void fun_2() { cout << "base-2\n"; }
    fun_3() { cout << "base-3\n"; }
    virtual void fun_4() { cout << "base-4\n"; }
};
class derived : public base
{
public:
    void fun_1() { cout << "derived-1\n"; }
    void fun_2() { cout << "derived-2\n"; }
    void fun_4(int x) { cout << "derived-4\n"; }
};

int main()
{
    base *b;
    derived d;
    b = &d;
    b->fun_1();
    b->fun_2();
    b->fun_3();
    b->fun_4();
    return 0;
}
