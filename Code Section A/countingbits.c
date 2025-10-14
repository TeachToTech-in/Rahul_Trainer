/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *countBits(int n, int *returnSize)
{
    int *result = (int *)malloc(sizeof(int) * (n + 1));
    *returnSize = n + 1;

    for (int i = 0; i <= n; i++)
    {
        int x = i;
        int count = 0;
        while (x)
        {
            count = count + (x & 1);
            x = x >> 1;
        }
        result[i] = count;
    }
    return result;
}