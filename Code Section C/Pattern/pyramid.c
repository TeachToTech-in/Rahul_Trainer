// Print Pyramid
#include <stdio.h>
int main()
{
    int n = 5;
    int i = 1;
    int j = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}