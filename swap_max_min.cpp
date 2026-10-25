#include <iostream>
#include <algorithm> // max_element, min_element, swap ke liye
using namespace std;

// Function declaration
void swapMaxMin(int arr[], int n)
{
    if (n <= 1)
        return; // Edge case: single element ya empty array

    // Max aur Min element ke indices find karna
    int maxIdx = max_element(arr, arr + n) - arr;
    int minIdx = min_element(arr, arr + n) - arr;

    // Array ke andar original elements ko swap karna
    swap(arr[maxIdx], arr[minIdx]);
}

int main()
{
    int n;
    cout << "Enter the size: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Function call
    swapMaxMin(arr, n);

    // Modified array print karna (0 se n-1 tak forward loop)
    cout << "Array after swapping max and min: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}