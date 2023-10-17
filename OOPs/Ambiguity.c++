#include <iostream>
using namespace std;

class A
{
public:
    void print()
    {
        cout << "I am A." << endl;
    }
};

class B
{
public:
    void print()
    {
        cout << "I am B." << endl;
    }
};

class C : public A, public B
{
public:
    void print()
    {
        cout << "I am C." << endl;
    }
};

int main()
{

    C c;
    c.A::print();
    c.B::print();
    c.C::print();

    return 0;
}