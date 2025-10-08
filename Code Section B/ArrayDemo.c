#include <stdio.h>
// Declaration of Function
void inputArray(int arr[], int size);
void printArray(int arr[], int size);
// leet 136 Single number
int singleNumber(int nums[], int n)
{
    int xor = 0;
    for (int i = 0; i < n; i++)
    {
        xor = xor ^ nums[i];
    }
    return xor;
}
// leet 389 find the number
char findTheDifference(char *s, char *t)
{
    char xor = '\0';
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        xor = xor ^ s[i] ^ t[i];
    }
    xor = xor ^ t[i];
    return xor;
}
// leet 268 Missing Number
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
// Definition of Function
void inputArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Enter the value of arr[%d]", i);
        scanf("%d", &arr[i]);
    }
}
void printArray(int arr[], int size)
{
    int i;
    printf("[");
    for (i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("]\n");
}
