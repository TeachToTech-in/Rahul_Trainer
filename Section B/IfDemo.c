#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter Two Numbers \n");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%d is greater than %d \n", a, b);
    }
    else{
        printf("%d is greater than %d",b,a);
    }
    printf("Exit");
    return 0;
}