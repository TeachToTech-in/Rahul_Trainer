// leet 2220
int minBitFlips(int start, int goal)
{
    int xor = start ^ goal;
    int count = 0;
    while (xor != 0)
    {
        count = count + (xor & 1);
        xor = xor >> 1;
    }
    return count;
}

int minBitFlips(int start, int goal)
{
    int count = 0;
    while (start || goal)
    {
        count = count + ((start % 2) ^ (goal % 2));
        start = start >> 1;
        goal = goal >> 1;
    }
    return count;
}

int minBitFlips(int start, int goal)
{
    int xor = start ^ goal;
    int count = 0;
    while (xor)
    {
        xor = xor & (xor - 1);
        count++;
    }
    return count;
}