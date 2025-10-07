#include <stdio.h>
void inputArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Value of index [%d] ", i);
        scanf("%d", &arr[i]);
    }
}
void printArray(int arr[], int n)
{
    printf("The Array is:\n ");
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("]\n");
}
// leet 268
int missingNumber(int *nums, int numsSize)
{
    int sum = numsSize * (numsSize + 1) / 2;
    for (int i = 0; i < numsSize; i++)
    {
        sum = sum - nums[i];
    }
    return sum;
}
int main()
{
    int arr[5];
    inputArray(arr, 5);
    printArray(arr, 5);
    return 0;
}