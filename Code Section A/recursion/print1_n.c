#include <stdio.h>
void printuserDefine(int i, int n);
int main()
{

    printuserDefine(1, 5);
    return 0;
}
// void print(int n)
// {
//     if (n >= 10)
//         return;
//     printf("%d \n", n);
//     print(n + 1);
// }
void printuserDefine(int i, int n)
{
    if (i > n)
        return;
    printuserDefine(i + 1, n);
    printf("%d \n", i);
}