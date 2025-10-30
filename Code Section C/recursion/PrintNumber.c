#include <stdio.h>
void printDsc(int n)
{
    if (n < 1)
        return;
    printf("%d\n", n);
    printDsc(n - 1);
}

void printAsc(int n)
{
    if (n < 1)
        return;

    printAsc(n - 1);
    printf("%d\n", n);
}
void printRange(int start, int end)
{
    if (start > end)
        return;
    printf("%d\n", start);
    printRange(start + 1, end);
}
int main()
{
    // printAsc(5);
    // printDsc(5);
    printRange(4, 20);
    return 0;
}