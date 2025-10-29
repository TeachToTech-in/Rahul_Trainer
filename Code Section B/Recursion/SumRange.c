// Write a recursive function which adds the numbers within the given range
#include <stdio.h>
int sumRange(int start, int end)
{
    if (start > end)
        return 0;
    return start + sumRange(start + 1, end);
}
int main()
{
    int start, end;
    printf("enter two values \n");
    scanf("%d %d", &start, &end);
    printf("The Sum of a range %d ", sumRange(start, end));
}