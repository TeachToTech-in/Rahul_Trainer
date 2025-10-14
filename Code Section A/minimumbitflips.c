int minBitFlips(int start, int goal)
{
    int x = start ^ goal;
    int count = 0;
    while (x)
    {
        count = count + (x & 1);
        x = x >> 1;
    }
    return count;
}