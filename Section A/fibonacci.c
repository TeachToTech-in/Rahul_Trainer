/* Print the fibonnaci Seriers upto nth term entered by user */
#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    //  printf("%d %d ", a, b);
    if (n == 0)
        printf("%d ", a);
    if (n >= 1)
        printf("%d %d ", a, b);
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}