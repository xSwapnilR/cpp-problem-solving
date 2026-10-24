#include <iostream>
using namespace std;
int n;
int calculateSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int calculateProduct(int arr[], int n)
{
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }
    return product;
}
int main()
{
    cout << "Enter the size : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int totalSum = calculateSum(arr, n);
    int totalProd = calculateProduct(arr, n);

    cout << "Sum: " << totalSum << endl;
    cout << "Product: " << totalProd << endl;
    return 0;
}