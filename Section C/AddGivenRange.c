/*Write A funtion Which Adds The Even Number withing the Given Range*/
#include <stdio.h>
int addRange(int minRange, int maxRange)
{
    int sum = 0;
    int x = minRange;
    while (x <= maxRange)
    {
        if (x % 2 == 0)
            sum = sum + x;
        x++;
    }
    return sum;
}