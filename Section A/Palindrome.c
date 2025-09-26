#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
bool isPalindrome(int x)
{
    int y = x;
    long rev = 0;
    if (x < 0)
        return false;
    while (y != 0)
    {
        rev = (rev * 10) + (y % 10);
        y = y / 10;
    }

    if (rev >= INT_MIN && rev <= INT_MAX && rev == x)
        return true;
    else
        return false;
}
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (isPalindrome(x))
    {
        printf("The Given Number is Palindrome\n");
    }
    else
    {
        printf("The Given Number is not Palindrome\n");
    }
}