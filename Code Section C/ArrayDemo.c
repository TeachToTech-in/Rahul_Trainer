#include <stdio.h>
// Declaration of Function
void inputArray(int arr[], int size);
void printArray(int arr[], int size);

int search(int nums[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (nums[i] == target)
            return i;
    }
    return -1;
}
int missingNumber(int *nums, int n)
{

    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x = x ^ nums[i] ^ (i + 1);
    }
    return x;
}
int binarySearch(int nums[], int size, int target)
{
    int beg = 0;
    int end = size - 1;
    int mid;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            end = mid - 1;
        else
            beg = mid + 1;
    }
    return -1;
}
int missingNumber(int *nums, int n)
{

    for (int i = 1; i <= n; i++)
    {
        int j = binarySearch(nums, n, i);
        if (j == -1)
            return i;
    }
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
