#include <iostream>
using namespace std;
void print(int *arr, int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int s; // Size of an Array;
    cout << "Enter the size of an Array: ";
    cin >> s;

    int arr[s]; // Crete Array
    cout << "Enter the element of arrar: " << endl;
    for (int i = 0; i < s; i++) // Input in element
    {
        cin >> arr[i];
    }
    cout << "Original Array:- ";
    print(arr, s);

    // Sorting
    for (int i = 0; i < s - 1; i++)
    {
        int min_Index = i;              // first we take first element as a minimum from all
        for (int j = i + 1; j < s; j++) // then check traverse from second element to last element
        {
            if (arr[j] < arr[min_Index]) // to check if any element is smaller than first element
            {
                min_Index = j; // if there the change the value of the minimum element
            }
        }
        swap(arr[min_Index], arr[i]); // now swap the element with minimum element;
    }
    cout << "Sorted Array:- ";
    print(arr, s);

    return 0;
}