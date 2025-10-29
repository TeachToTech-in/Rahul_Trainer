// Write A Recursive Function Which Calculates the Factorial of a number
#include <stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d", &n);
    printf("The Factorial of %d is %d", n, factorial(n));
}
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}