#include <stdio.h>
int primecheck(int num)
{
    if (num <= 1)
    {
        return 0; // not a prime
    }

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {

            return 0; // not a prime
        }
    }

    return 1; // prime
}
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int notprime = 0;
    int prime = 0;
    for (int i = 0; i < n; i++)
    {
        if (primecheck(arr[i]) == 0)
        {
            printf("\n Not a prime ");
            notprime++;
        }
        else
        {
            printf("\nPrime");
            prime++;
        }
    }
    printf("\nThere are %d primes in the array", prime);
    printf("\nThere are %d non primes in the array", notprime);
    return 0;
}
