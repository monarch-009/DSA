#include <iostream>
using namespace std;

int main()
{
    int arr[100];

    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    cout << "Enter the element of an array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int pos;
    cout << "Enter the position at which we have to insert the element: ";
    cin >> pos;

    int val;
    cout << "Enter the value to insert in array : ";
    cin >> val;

    // increase the size by 1
    size++;

    // shift elements forward
    for (int i = size; i >= pos; i--)
        arr[i] = arr[i - 1];

    // insert x at pos
    arr[pos - 1] = val;


    //print final array
    cout << "Final array is ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}