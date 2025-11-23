#include <iostream>
using namespace std;
// Function to perform insertion sort
void insertionSort(int arr[], int n)
{
    // Traverse through 1 to n
    for (int i = 1; i < n; ++i)
    {
        int key = arr[i]; // The current element to be compared
        int j = i - 1;
// Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}
// Function to print an array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = size(arr);   
    cout<<n<<endl;
    cout << "Original array: ";
    printArray(arr, n);
    insertionSort(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}
