#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int s, int e, int key)
{
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        // Searching Mid Element
        if (arr[mid] == key)
        {
            return mid;
        }
        // Go to Right Side
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        // Go to left side
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main(void)
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

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    int result = binarySearch(arr, 0, size - 1, key);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}
