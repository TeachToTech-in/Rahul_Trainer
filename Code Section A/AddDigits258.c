/*Given an integer num, repeatedly add all its digits until the result
has only one digit, and return it.
Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2
Since 2 has only one digit, return it. */
#include <stdio.h>
int addDigits(int num)
{
    while (num >= 10)
    {
        int sum = 0;
        while (num > 0)
        {
            sum = sum + (num % 10);
            num /= 10;
        }
        num = sum;
    }
    return num;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int res = addDigits(num);
    printf("The result is: %d\n", res);
    return 0;
}