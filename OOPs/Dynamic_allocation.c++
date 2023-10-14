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
    // creation of object
    // Static Allocation
    // Student s1;
    // cout << sizeof(s1) << endl; // To check the Size of Object

    // s1.getdata();
    // s1.print();

    // Dynamically Allocation
    Student *s2 = new Student;
    // (*s2).getdata();
    // (*s2).print();
    s2->getdata();
    s2->print();

    return 0;
}