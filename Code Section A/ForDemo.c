// Print From 1 to 10 using while
#include <stdio.h>
int main()
{
    // Initialization
    int i = 1;
    // Condition
    // for(;;) infinite
    for (; i <= 10;)
    // for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
        // Updation
        i++;
    }
    return 0;
}
