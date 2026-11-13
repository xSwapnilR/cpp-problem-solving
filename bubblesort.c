
                           //BUBBLE SORT//.......

#include <stdio.h>
int main () {
    int n ; 
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: ",n);
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n-1; i++) {       //passes ke liye hai 
        for (int j = 0; j<n-1-i; j++) {
            if (arr[j]>arr[j+1]) {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
    }
    printf("Sorted loop: ");
    for(int i = 0; i<n; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}