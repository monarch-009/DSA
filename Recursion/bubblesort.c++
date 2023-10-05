#include <iostream>
using namespace std;
void sortArrya(int *arr, int size)
{
    //base case - Already Sorted 
    if(size == 0 || size == 1)
        return;

    //1 case solve the problem 
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > arr[i+1]){
            swap(arr[i] ,arr[i+1]);
        }
    }
    sortArrya(arr,size-1);
    
}

int main()
{
    int size;
    cout << "Enter the size of an array: " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the element of an array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sortArrya(arr, size);
    cout << "Sorted Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}