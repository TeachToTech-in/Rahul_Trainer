#include <stdio.h>
void fib(int n, int f1, int f2, int f3)
{
    if (n > 0)
    {
        printf("%d", f1);
        f3 = f1 + f2;
        fib(n - 1, f2, f3, f3);
    }
}
int main()
{
    int n;
    printf("Enter the Number\n");
    scanf("%d", &n);
    fib(n, 0, 1, 1);
}