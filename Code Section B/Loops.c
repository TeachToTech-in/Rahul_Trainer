#include <stdio.h>
int main()
{
    int x = 12, y = 12, z = 12;
    printf("Output from While loop\n");
    while (x <= 10)
    {
        printf("%d\n", x);
        x++; // x=x+1;
    }
    printf("Output from Do While loop\n");
    do
    {
        printf("%d\n", y);
        y++;
    } while (y <= 10);
    printf("Output from For loop\n");
    for (z = 12; z <= 10; z++)
    {
        printf("%d\n", z);
    }
    return 0;
}
