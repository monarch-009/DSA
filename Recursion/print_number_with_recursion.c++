#include <iostream>
using namespace std;

void print(int n)
{
    // Base Case
    if (n == 0)
    {
        return;
    }
    // Recursive relation --> Head
    print(n - 1);

    cout << n << " ";

    // Recursive relation --> Tail
    //  print(n - 1);
}

int main()
{
    int n;
    cout << "Enter number upto where we have to print : ";
    cin >> n;
    print(n);
    return 0;
}