// Combination of more than 1 type of inhertance
//  One class serve as Parent class for more than one class.
#include <iostream>
using namespace std;
class X
{
public:
    void printX()
    {
        cout << "Hybrid Inheritance." << endl;
    }
};

class A
{
public:
    void printA()
    {
        cout << "From Parent Claas A." << endl;
    }
};

class B : public A
{
public:
    void printB()
    {
        cout << "From Claas B." << endl;
    }
};

class C : public A,public X
{
public:
    void printC()
    {
        cout << "From Claas C." << endl;
    }
};

int main()
{
    A a1;
    a1.printA();

    cout << endl;

    B b1;
    b1.printA();
    b1.printB();

    cout << endl;

    C c1;
    c1.printA();
    c1.printC();
    c1.printX();

    return 0;
}