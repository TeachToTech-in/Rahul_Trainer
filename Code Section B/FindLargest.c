/*Write a Program Which Find The Largest Between three by using method*/
#include <stdio.h>
int findLargest(int a, int b, int c); // Fuction Declaration
int main()
{
    int a, b, c;
    printf("Enter Three Numbers");
    scanf("%d %d %d", &a, &b, &c);
    // Fuction Calling
    int max = findLargest(a, b, c);
    printf("The Largest Number is %d", max);
    return 0;
}
// Fuction Definition
int findLargest(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
            return a;
        else
            return c;
    }
    else
    {
        if (b > c)
            return b;
        else
            return c;
    }
}
