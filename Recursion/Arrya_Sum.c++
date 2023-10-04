#include <iostream>
using namespace std;
int getsum(int arr[], int size)
{

    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    int sum = arr[0] + getsum(arr + 1, size - 1);
    return sum;
}

int main()
{
    int size;
    cout << "Enter the Size of an Arrya: ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int sum = getsum(arr, size);
    cout << "Sum is " << sum << endl;

    return 0;
}