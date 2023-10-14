#include <iostream>
using namespace std;

class Book
{
private:
    int num;
    char name[20];
    float price;

public:
    // Constructor
    Book()
    {
        cout << "Welcome to the World of Book" << endl;
    }
    // Paramerterised Constructor
    Book(int num)
    {
        cout << "this -> " << this << endl;
        this->num = num;
        cout << "Serial No: " << num << endl;
    }
    void setdata(void)
    {
        cout << "Enter S.no Of Book: ";
        cin >> num;
        cout << "Enter first name of Book: ";
        cin >> name;
        cout << "Enter the price of Book: ";
        cin >> price;
    }
    void print(void)
    {
        cout << "Serial no : " << num << endl;
        cout << "Name : " << name << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    // Object Created Staticly
    Book b1(10);
    cout << "Address of b1 " << &b1 << endl;
    // Dynamically
    Book *b2 = new Book(); //  with or Without () we can call

    return 0;
}