#include <stdio.h>

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
//
void reverseStringRecursion(char *s, int sSize)
{
    if (i < j)
    {
    }
}
int main()
{
    char arr[] = "hello";
    printf("%s \n", arr);
    reverseString(arr, 5);
    printf("%s \n", arr);
    return 0;
}