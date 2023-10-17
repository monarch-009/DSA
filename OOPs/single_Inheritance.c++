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

};
int main()
{
    Dog d1;
    d1.speak();
    return 0;
}