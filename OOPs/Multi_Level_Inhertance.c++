#include <iostream>
using namespace std;
class Animal
{
public:
    int age;
    float weight;

    void speak()
    {
        cout << "Speaking" << endl;
    }
};
class Dog : public Animal // Single Inheritance
{
public:
    ;
    void speak1()
    {
        cout << "Bark" << endl;
    }
};
class germanShepher : public Dog // Multi-Level-Inhertance
{
public:
    void color()
    {
        cout << "Black" << endl;
    }
};
int main()
{
    germanShepher g1;
    g1.speak();
    g1.speak1();
    g1.color();
    return 0;
}