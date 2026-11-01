#include <stdio.h>

int main() {
    int n,target; 
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: ",n);
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the target value: ");
    scanf("%d",&target);
    for (int i = 0; i < n; i++) {
        if (target==arr[i]) {
            printf("%d is at %d index", target,i);
        }
    }
    return 0;
}