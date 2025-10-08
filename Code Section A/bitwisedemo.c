#include <stdio.h>
int main()
{
    int x = 20;
    int y = -11;
    int z;
    // z = x & y; ==> 20
    // z = x | y; ===>-11
    // z = x ^ y; ==>31

    /// z = x << 1; ===> 40
    z = x >> 1;
    printf("%d", z);
    return 0;
}