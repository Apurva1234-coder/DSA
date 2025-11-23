#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) // ISME Ek value store hoga i.e i ka example 64 and fir 2nd loop me j value i.e dusra 2nd element value
    {
        int smallest = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallest])//fir ek dusro ke sath compare hoge smallest value would be stored in j
            {
                smallest = j;
            }
        }

        // Using built-in swap()
        swap(arr[i], arr[smallest]); // this will swap i and j i.e smallest ko aage and baade vale ko last me 
    }
}

void printArray(int arr[], int n) // ye use hoga sab print krne 
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = size(arr);   
    cout<<n<<endl;
    cout << "Original array: ";
    printArray(arr, n);//print krega 

    selectionSort(arr, n);//sort kregaa and print krrewgaa sab  using the print array at bottom

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
