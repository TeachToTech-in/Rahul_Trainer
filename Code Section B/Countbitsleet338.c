/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *countBits(int n, int *returnSize)
{
    int *result = (int *)malloc(sizeof(int) * (n + 1));
    *returnSize = n + 1;
    result[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int x = i;
        int count = 0;
        while (x)
        {
            x = x & (x - 1);
            count++;
        }
        result[i] = count;
    }
    return result;
}
