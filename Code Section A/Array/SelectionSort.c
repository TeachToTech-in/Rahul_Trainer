#include <stdio.h>
#include <limits.h>
// Write a Function Which Find The Position Of Minimum Value in Array
int min(int *arr, int start, int end)
{
    int min = INT_MAX;
    int pos = -1;
    for (int i = start; i <= end; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            pos = i;
        }
    }
    return pos;
}
void selectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int pos = min(arr, i, n - 1);
        int temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }
}
// Print Int Array
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {12, 13, 1, 11, 23, 2, 4, 6};
    printArray(arr, 8);
    selectionSort(arr, 8);
    printArray(arr, 8);
    return 0;
}
