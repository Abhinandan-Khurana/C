#include <stdio.h>

int main()
{
    int i, n, factorial = 1;
    printf("enter the value of n:\n", n);
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("the factorial of n is: %d\n", factorial);

    return 0;
}