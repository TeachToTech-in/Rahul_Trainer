

int fib(int n)
{
    int n0 = 0;
    int n1 = 1;
    int i = 2;
    int nextterm;
    if (n <= 1)
        return n;
    while (i <= n)
    {
        nextterm = n0 + n1;
        n0 = n1;
        n1 = nextterm;
        i++;
    }
    return nextterm;
}