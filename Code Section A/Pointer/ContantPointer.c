#include <stdio.h>
int main()
{
    int a = 60;
    int b = 20;
    const int *p = &a; // Pointer to Constant
    // int const *p = &a; // Pointer to Constant
    // int  *const p = &a;// Constant Pointer
    // p = &b; // We cant initialize again if the variable declare contant pointer
    printf("%d\n", *p);
    printf("%p\n", p);
    *p = 100; /* We are not allow to change the value using Derefrencing
    // Operator if the variable declared as Pointer to contant*/
    a = 1000;
    printf("%d\n", *p);
    printf("%p\n", p);

    return 0;
}