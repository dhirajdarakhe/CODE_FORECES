#include <bits/stdc++.h>
using namespace std;
class A
{
private:
    int a, b;

public:
    A()
    {
        cout << "constructor a" << endl;
    }
    void print()
    {
        cout << "In class A\n";
    }
    ~A()
    {
        cout << "In destructor of A\n";
    }
};
class B : public A
{
private:
    int x, y;

public:
    B()
    {
        cout << "constructor b" << endl;
    }
    void print()
    {
        cout << "In class B\n";
    }
    ~B()
    {
        cout << "In destructor of B\n";
    }
};
int main()
{
    // B b;
    A *a = new B;
    // a = &b;
    // a->print();
    delete a;
}