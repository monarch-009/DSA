#include <iostream>
using namespace std;

bool issorted(int arr[], int size) // check it is shorted or not
{
    // base case
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remainingPart = issorted(arr + 1, size - 1);
        return remainingPart;
    }
}

int main()
{
    int n;
    cout << "Enter the Size of an arrya: ";
    cin >> n;
    cout << "Enter the element in array: " << endl;
    int arr[n]; // take element in array

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool ans = issorted(arr, n);
    if (ans)
    {
        cout << "Arrya is Sorted." << endl;
    }
    else
    {
        cout << "Arrya is not Sorted" << endl;
    }

    return 0;
}