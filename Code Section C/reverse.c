#include <stdio.h>
#include <limits.h>
int reverse(int x)
{
    long rev = 0;
    int rem = 0;
    while (x != 0)
    {

        rev = rev * 10 + (x % 10);
        x = x / 10;
    }
    if (rev <= INT_MAX && rev >= INT_MIN)

        return (int)rev;
    return 0;
}
int main()
{
    printf("The Reverse is %d", reverse(12345));
}