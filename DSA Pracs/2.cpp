#include <iostream>
using namespace std;

int main() {
    int arr[100], n, key, found = -1, i, choice;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements :\n";
    for (i = 0; i < n; i++) 
    
    cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    cout << "Choose: 1. Linear Search  2. Binary Search\n";
    cin >> choice;                       // <-- you must read 'choice' from user

    if (choice == 1) {
        // Linear search
        for (i = 0; i < n; i++) {
            if (arr[i] == key) {
                found = i;
                break;                   // break when found
            }
        }
    } else {
        // Binary search (requires sorted array)
        int low = 0, high = n - 1;
        while (low <= high) {           // use <= to include last element
            int mid = (low + high) / 2;
            if (arr[mid] == key) {
                found = mid;
                break;
            } else if (arr[mid] < key) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }

    if (found != -1)
        cout << "Element found at position: " << found + 1 << endl;
    else
        cout << "Element not found\n";

    return 0;
}
