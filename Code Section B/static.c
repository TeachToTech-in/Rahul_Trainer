#include <stdio.h>
void hello()
{
    static int x;
    printf("The value of x = %d\n", x);
    x++;
}
int main()
{
    hello();
    hello();
    hello();
    hello();
    hello();
    hello();
}