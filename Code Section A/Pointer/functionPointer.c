#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int main()
{
    int (*fptr)(int, int);   // declare function pointer
    fptr = subtract;         // assign function address
    int result = fptr(5, 7); // calling function using pointer
    printf("Result = %d", result);
    return 0;
}
