#include <stdio.h>
// Write a function which returns Sum of Given range using recursion
int sumRange(int start, int end)
{
    if (start > end)
        return 0;
    return start + sumRange(start + 1, end);
}
int sum(int n)
{
    if (n == 1)
        return 1;
    return n + sum(n - 1);
}
int main()
{
    printf("%d", sumRange(1, 10));
    return 0;
}