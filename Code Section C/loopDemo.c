// Code to Print 1 to 10 using while
#include <stdio.h>

int main()
{
    int i = 1;
    printf("Following output is Using While Loop\n");
    // In While It is mandatory to Provide Condition
    while (i <= 10)
    {
        printf("%d\n", i);
        i++; // i=i+1;
    }
    // int y;
    printf("Following output is Using For Loop\n");
    int y = 1;
    // for(;;) //Infinite Loop
    for (; y <= 10;)
    {
        printf("%d\n", y);
        y++; // y=y+1;
    }
    return 0;
}