#include <stdio.h>
void swap(int x, int y)
{
    auto int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 10, b = 20;
    swap(a, b);
    printf("The Value Stored in A is %d and B is %d", a, b);
    return 0;
}
