#include <iostream>
using namespace std;

void print(int *arr, int size)
{
    cout << "Size of an Array is " << size << "." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSearch(int *arr, int size, int key)
{
    print(arr, size);
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    linearSearch(arr + 1, size - 1, key);
}

int main()
{
    int size;
    cout << "Enter the size of an arrya: ";
    cin >> size;

    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key for Search: ";
    cin >> key;

    bool ans = linearSearch(arr, size, key);
    if (ans)
    {
        cout << "Element is in array." << endl;
    }
    else
    {
        cout << "Element is not in array." << endl;
    }

    return 0;
}