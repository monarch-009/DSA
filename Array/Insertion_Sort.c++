#include <iostream>
using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size; // Size of an Array;
    cout << "Enter the Size of an Array: ";
    cin >> size;

    int arr[size]; // create an array;
    cout << "Enter the element in array: " << endl;
    for (int i = 0; i < size; i++) // input in array
    {
        cin >> arr[i];
    }
    cout << "Original Array: "; // print array
    print(arr, size);

    // insertion sort
    for (int i = 1; i < size; i++) // first we have assume first elemnet is sorted and start our loop from second element
    {
        int temp = arr[i];    // then we have to put that elemnt in temporary variable so that we can shift it later 
        int j = i - 1; // then we have to set one variable to start loop to check smallest element in array;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
    cout << "Sorted Array: ";
    print(arr, size);

    return 0;
}