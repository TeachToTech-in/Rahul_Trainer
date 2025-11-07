#include <stdio.h>
int main()
{
    int i = 1;
    int j = 1;
    int n = 5;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            // if (i >= j) //Lower Left Triangle
            // if (i <= j) //Upper Right Triangle
            // if (i + j <= (n + 1)) ////Upper Left Triangle
            // if (i + j >= (n + 1))////Lower Left Triangle
            if (i + j >= (n + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
