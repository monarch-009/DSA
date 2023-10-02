#include <iostream>
using namespace std;
int fibonnacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return (fibonnacci(n - 1)) + (fibonnacci(n - 2));
    }
}

int main()
{
    int n;
    cout << "Enter number :  ";
    cin >> n;
    cout << "Fibonacci : " << fibonnacci(n) << endl;

    return 0;
}
