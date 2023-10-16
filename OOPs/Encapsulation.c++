#include <iostream>
using namespace std;
//The process of grouping data members and corresponding methods into a single unit is known as Encapsulation. It is an important part of object-oriented programming. We can create a fully encapsulated class by making all the data members private. If the data members are private, it can only be accessible within the class; no other class can access that class’s data members.
class student
{
private:
    string name;
    int age;
    int roll_no;

public:
    int getAge()
    {
        return this->age;
    }
    int getRoll()
    {
        return this->roll_no;
    }
};
int main()
{
    student s1;
    return 0;
}