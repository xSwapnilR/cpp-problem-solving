#include <iostream>
using namespace std;
int main()
{
    int n, target;
    cout << "Enter size: " << endl;
    cin >> n;
    cout << "Enter " << n << "elements" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "target value: " << endl;
    cin >> target;

    for (int i = 0; i < n; i++)
    {
        if (target == arr[i])
        {
            cout << "Element found which is at index  " << i << endl;
            return 0;
        }
    }

    cout << "Element not found." << endl;
    return 0;
}