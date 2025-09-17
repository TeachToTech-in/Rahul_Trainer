#include <stdio.h>

void Hello()
{
    static int x = 10;
    printf("%d\n", x);
    x++;
}
int main()
{
    Hello();
    Hello();
    Hello();
    Hello();
    Hello();
}