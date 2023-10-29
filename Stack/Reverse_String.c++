// Reserse a string using stack
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string str = "Aditya";
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }

    string ans = "";
    while (!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout << "Answer is : " << ans << endl;
    // This will also do the same as upar while is doing
    // while (!s.empty())
    // {
    //     cout << s.top();
    //     s.pop();
    // }

    return 0;
}