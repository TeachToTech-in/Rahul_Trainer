/*Given two integers a and b, return the sum of the
two integers without using the operators + and -.*/
#include <stdio.h>
// Function Declaration
int sum(int a, int b)
{
    int z = a + b;
    return z;
}
int main()
{
    int x, y;
    // Scanf is a function Which is
    // Used to Take Input From User
    //%d is a format Specifier of Integer Type
    printf("Enter Two Numbers: \n");
    scanf("%d %d", &x, &y);
    int add = sum(x, y);
    printf("The Sum of Entered Number is %d", add);
    return 0;
}