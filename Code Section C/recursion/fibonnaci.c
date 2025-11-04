#include <stdio.h>
#include <string.h>
int fib(int n, int arr[])
{
    if (arr[n] != -1)
        return arr[n];

    if (n <= 1)
        return arr[n] = n;
    int res = fib(n - 1, arr) + fib(n - 2, arr);
    arr[n] = res;
    return res;
}
int main()
{
    int n;
    printf("Enter the Term till where you want to print Fibonnaci Series\n");
    scanf("%d", &n);
    int arr[n + 1];
    memset(arr, -1, sizeof(arr));
    fib(n, arr);
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
