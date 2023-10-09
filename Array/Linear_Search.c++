#include <iostream>
using namespace std;

int LinerSearch(int *arr, int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the element of array:" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    int ans = LinerSearch(arr, size, key);

    if (ans)
    {
        cout << "Yes, " << key << " is in the array." << endl;
    }
    else
    {
        cout << "No, element is not in array." << endl;
    }

    return 0;
}