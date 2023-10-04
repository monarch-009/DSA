#include <iostream>
using namespace std;

void print(int arr[], int s, int e)
{
    for (int i = s; i < e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int *arr, int s, int e, int key)
{
    cout << endl;
    print(arr, s, e);

    // base
    // element not found
    if (s > e)
    {
        return false;
    }
    int mid = s + (e - e) / 2;
    cout << "Value of arr mid is " << mid << endl;
    // element found
    if (arr[mid] == key)
    {
        return true;
    }
    if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, key);
    }
}

int main()
{
    int n;
    cout << "Enter the Size of an Arrya: ";
    cin >> n;

    int arr[n];
    cout << "Enter the element of sorted array:-" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key to search: ";
    cin >> key;
    bool ans = binarySearch(arr, 0, n, key);
    cout << ans << endl;
    if (ans)
    {
        cout << "Element is present in the array." << endl;
    }
    else
    {
        cout << "Element is  not present in the array." << endl;
    }

    return 0;
}