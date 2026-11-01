#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int minIndex = 0;
    for (int i = 1; i<n; i++) {
        if (arr[i]<arr[minIndex]) {
            minIndex = i;
        }
    }
    
    printf("The minimum number is at index - %d",minIndex);
    return 0;
}