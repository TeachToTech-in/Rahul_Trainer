#include <stdio.h>
// Write a Function Which Prints the number in given range
void printRange(int start, int end);
void f(int n);
int main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d", &n);
    f(n);
    return 0;
}
void printRange(int start, int end)
{
    if (start > end)
        return;
    printf("%d\n", start);
    printRange(start + 1, end);
}
void f(int n)
{
    if (n < 1)
        return;
    printf("%d\n", n);
    f(n - 1);
}