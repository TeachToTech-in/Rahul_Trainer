#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter Two Values\n");
    scanf("%d %d", &a, &b);
    if (a > b)

        printf("%d is greater than %d \n", a, b);
    else
        printf("%d is greater than %d \n", b, a);

    printf("Exit");
}