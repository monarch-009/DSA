#include <iostream>
using namespace std;
class Distance
{
public:
    int feet;
    int inch;
    void setdata()
    {
        cout << "Enter the feet: ";
        cin >> feet;
        cout << "Enter the inch: ";
        cin >> inch;
    }
    void print()
    {
        int newfeet = feet - 1;
        int newiinch = inch - 1;
        cout <<"OutPut: "<< newfeet << "'" << newiinch << endl;
    }
};

int main()
{
    Distance d;
    d.setdata();
    d.print();

    return 0;
}