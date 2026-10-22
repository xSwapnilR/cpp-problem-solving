#include <iostream>
using namespace std;
int main()
{
    int n;
    int largest = -1;
    int secLargest = -1;
    cout << "Enter the size: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << "numbers" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        if (arr[j] > largest)
        {
            secLargest = largest;
            largest = arr[j];
        }
        else if (arr[j] < largest && arr[j] >> secLargest)
        {
            secLargest = arr[j];
        }
    }
    cout << "Second largest : " << secLargest << endl;
    return 0;
}