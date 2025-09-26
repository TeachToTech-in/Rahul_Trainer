#include <stdio.h>
int subtractProductAndSum(int n)
{
    int sum = 0;
    int prod = 1;
    while (n != 0)
    {
        sum = sum + (n % 10);
        prod = prod * (n % 10);
        n = n / 10;
    }
    return prod - sum;
}