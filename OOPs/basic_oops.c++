#include <iostream>
#include <string>
// #include "class_Student.c++"
using namespace std;

class Student
{
    // data member or propertic
    char name;
    int roll_no;
    float mark;
    // Function memeber
public:
    // void getdata(void) // Function to take data
    // {
    //     cout << "Enter the name: ";
    //     cin >> name;
    //     cout << "Enter the Roll number: ";
    //     cin >> roll_no;
    //     cout << "Enter the mark: ";
    //     cin >> mark;
    // }
    // void print(void) // Function to print all  the data
    // {
    //     cout << "Name : " << name << endl;
    //     cout << "Roll number: " << roll_no << endl;
    //     cout << "Mark : " << mark << endl;
    // }
    //----------------------------------------------------------
    char getname()
    {
        return name;
    }
    int getroll_no()
    {
        return roll_no;
    }
    float getmark()
    {
        return mark;
    }

    void setname(char n)
    {
        name = n;
    }
    void setroll_no(int r)
    {
        roll_no = r;
    }
    void setmark(float m)
    {
        mark = m;
    }
};

int main()
{
    // creation of object
    Student s1;
    // cout << sizeof(s1) << endl; // To check the Size of Object

    // s1.getdata();
    // s1.print();
    s1.setname('A');
    s1.setroll_no(26);
    s1.setmark(99.99);
    cout << "Name : " << s1.getname() << endl;
    cout << "Roll number : " << s1.getroll_no() << endl;
    cout << "Mark : " << s1.getmark() << endl;
    return 0;
}