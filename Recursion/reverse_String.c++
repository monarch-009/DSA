#include <iostream>
using namespace std;

void reverse(string &str, int i, int j)
{
    // to check how it is working
    cout << "Call recieved fro " << str << endl;
    // base case
    if (i > j)
    {
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;

    // Recursive call
    reverse(str, i, j);
}

int main()
{
    string name = "ABCDE";
    cout << "Main string : " << name << endl;
    cout << endl;
    reverse(name, 0, name.length() - 1);
    cout << endl;
    cout << "Reversed string : " << name << endl;
    return 0;
}