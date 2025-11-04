// Binary Search Using Iteration
#include <stdio.h>
int search(int *nums, int n, int target)
{
    int beg = 0;
    int end = n - 1;
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

void bubbleSort(int* arr, int n) {
    int flag;
    for(int i = 0 ;i<n-1;i++){
        flag =0;
        for(int j = 0 ;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                flag=1;
                int temp = arr[j];
                arr[j] =arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(!flag)
        break;
        
    }
    
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int pos = search(nums, 10, 3);
    if (pos != -1)
    {
        printf("Element Found at %d \n", pos);
    }
    else
    {
        printf("Element Not Found \n");
    }
    return 0;
}