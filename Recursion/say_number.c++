#include <iostream>
using namespace std;

void saydigit(int n, string arr[])
{
    // base case
    if (n == 0)
    {
        return;
    }

    int digit = n % 10;
    n = n / 10;

    //cout << arr[digit] <<" "; // This will print in reverse order

    //recursive call
    saydigit(n,arr);
    cout << arr[digit] <<" ";
}

int main()
{
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    int n;
    cout << "Enter number: ";
    cin >> n;
    saydigit(n, arr);
    return 0;
}