#include <iostream>
using namespace std;

class Animal // class Animal
{
public:
    int age;
    float weight;

    void bark()
    {
        cout << "Barking" << endl;
    }
};

class Human // class Animal
{
public:
    string color;
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
class Hybrid : public Animal, public Human // Muliple Inheritance
{
    
};
int main()
{
    Hybrid h1;
    h1.bark();
    h1.speak();
    return 0;
}