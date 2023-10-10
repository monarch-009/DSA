/*

*/
#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main()
{
    // creation of stack;
    stack<int> s;

    // Push operation
    s.push(10);
    s.push(9);
    s.push(8);
    s.push(7);
    s.push(6);
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    // Pop operation
    s.pop();

    cout << "Printing Top Element " << s.top() << endl;
    if (s.empty())
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        cout << "Stack is not empty." << endl;
    }
    return 0;
}