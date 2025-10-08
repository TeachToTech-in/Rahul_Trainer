#include <stdio.h>
extern int count;
void printCount()
{
    printf("%d", count);
}
int main()
{
    printCount();
    return 0;
}