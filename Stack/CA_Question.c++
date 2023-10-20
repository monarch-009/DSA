#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;

    while (true)
    {
        cout << "Stack Operations:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int element;
            cout << "Enter the element to push onto the stack: ";
            cin >> element;
            s.push(element);
            cout << "Pushed " << element << " onto the stack." << endl;
            break;
        }
        case 2:
        {
            if (!s.empty())
            {
                cout << "Popped " << s.top() << " from the stack." << endl;
                s.pop();
            }
            else
            {
                cout << "Stack is empty. Cannot pop." << endl;
            }
            break;
        }
        case 3:
        {
            if (!s.empty())
            {
                stack<int> tempStack = s;
                cout << "Elements in the stack:";

                for (stack<int> tmp = tempStack; !tmp.empty(); tmp.pop())
                {
                    cout << tmp.top() << endl;
                }
            }
            else
            {
                cout << "Stack is empty." << endl;
            }
            break;
        }
        case 4:
            cout << "Exiting the program." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please enter a valid option (1-4)." << endl;
        }
    }

    return 0;
}
