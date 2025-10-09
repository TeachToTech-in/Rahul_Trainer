#include <stdio.h>
// Declaration of Function
void inputArray(int arr[], int size);
void printArray(int arr[], int size);

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
