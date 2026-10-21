#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size: " << endl;
    cin >> n;
    cout << "Enter " << n << " elements" << endl;
    int arr[n];
    int count = 0;
    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];

        if (arr[i] % 2 == 0)
        {
             evenCount++;
        }
        else
        {
           oddCount++;
        }
    }

    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;
    return 0;
}
