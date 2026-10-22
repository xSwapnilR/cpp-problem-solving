#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the size: " << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool isSorted = true;

    // Loop n-1 tak chalega kyunki hum arr[i+1] access kar rahe hain
    for (int i = 0; i < n-1; i++) {
        if (arr[i] > arr[i+1]) {
            isSorted = false;
            break;
        }
    }

    if (isSorted) {
        cout << "Sorted" << endl;
    } else {
        cout << "Not Sorted" << endl;
    }

    return 0;
}