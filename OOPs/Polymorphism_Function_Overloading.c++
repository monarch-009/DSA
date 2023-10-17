#include <iostream>
using namespace std;
class A
{
public:
    void sayHello()
    {
        cout << "Hello Aditya Raj." << endl;
    }

    int sayHello(string name, int n)
    {
        cout << "Hello " << name << " " << n << endl;
        return 1;
    }

    void sayHello(string name)
    {
        cout << "Hello " << name << endl;
    }
};
int main()
{
    A a;
    a.sayHello("Rohan Singh.", 5);
    return 0;
}