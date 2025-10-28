#include <stdio.h>
// Reverse String Using Iteration
void reverseString(char *s, int sSize)
{
    int i = 0;
    int j = sSize - 1;
    char temp;

    while (i < j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
// Reverse string Using Recursion
void helper(int start, int end, char *s)
{
    if (start >= end)
        return;
    char temp = s[start];
    s[start] = s[end];
    s[end] = temp;
    helper(start + 1, end - 1, s);
}
void reverseStringRecursive(char *s, int sSize)
{
    helper(0, sSize - 1, s);
}
int main()
{
    char arr[] = "Rahul";
    printf("%s \n", arr);
    reverseStringRecursive(arr, 5);
    printf("%s \n", arr);
    return 0;
}