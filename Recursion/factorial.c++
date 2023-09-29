#include <iostream>
using namespace std;
int factorial(int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }
    //int ans = n * factorial(n - 1);
    //return ans;
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    int fact = factorial(n);
    cout << "Factorial is " << fact << endl;
    return 0;
}