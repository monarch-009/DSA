#include <iostream>
#include <string>
using namespace std;

class Student
{
    // data member or propertic
    char name;
    int roll_no;
    float mark;
    // Function memeber
public:
    static int room;

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
        cout << "Name : " << name << endl;
        cout << "Roll number: " << roll_no << endl;
        cout << "Mark : " << mark << endl;
    }
    static int random()
    {
        return room;
    }
};

int Student ::room = 10;

int main()
{
    cout << "Room : " << Student::room << endl;
    Student a;
    a.room;
    cout << "Room of a : " << a.room << endl;

    return 0;
}