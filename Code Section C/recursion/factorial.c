#include <stdio.h>
int factorial(int n)
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    int res = factorial(5);
    printf("%d", res);
    return 0;
}