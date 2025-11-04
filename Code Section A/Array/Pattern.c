#include <stdio.h>

int main()
{
    int n = 10; // number of rows

    // upper part
    for (int i = 1; i <= n - 1; i++)
    {
        // print spaces before first star
        for (int j = i; j < n; j++)
        {
            printf(" ");
        }
        printf("*");

        // print spaces between stars
        if (i > 1)
        {
            for (int j = 1; j <= (2 * i - 3); j++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    // bottom line
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        printf("*");
    }
    printf("\n");

    return 0;
}