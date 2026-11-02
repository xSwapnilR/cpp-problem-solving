#include <stdio.h>
int main() {
    int n; 
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: ",n);
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[i+1]) {
            printf("NOT SORTED");
             return 0;
        }
        
    }
            printf("SORTED");
    return 0;
}