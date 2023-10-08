#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the element in array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Original Array:- ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int pos;
    cout << "Enter the position to delete the element: ";
    cin >> pos;

    for (int i = pos; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    cout << "Final Array:- ";
    for (int i = 0; i < size-1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}