#include <iostream>
#include <string>
// #include "class_Student.c++"
using namespace std;

class Student
{
    // data member or propertic
    char name[20];
    int roll_no;
    float mark;

    // Function memeber
public:
    Student()
    {
        cout << "Simple Constuctor Called." << endl;
    }
    void getdata(void) // Function to take data
    {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the Roll number: ";
        cin >> roll_no;
        cout << "Enter the mark: ";
        cin >> mark;
    }
    void print(void) // Function to print all  the data
    {
        cout << endl;
        cout << "Name : " << name << endl;
        cout << "Roll number: " << roll_no << endl;
        cout << "Mark : " << mark << endl;
    }
};
int main()
{
    Student s1;
    s1.getdata();
    s1.print();

    Student s2(s1); // Copy Constructor
    s2.print();

    return 0;
}