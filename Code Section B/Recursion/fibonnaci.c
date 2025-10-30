// Fibonnaci using recursion
#include <stdio.h>
#include <string.h>
int fib(int n, int *arr);
int main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d", &n);
    int arr[n + 1];
    memset(arr, -1, sizeof(arr));
    fib(n, arr);
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
}

int fib(int n, int *arr)
{
    if (arr[n] != -1)
        return arr[n];
    if (n <= 1)
        return arr[n] = n;
    return arr[n] = fib(n - 1, arr) + fib(n - 2, arr);
}
