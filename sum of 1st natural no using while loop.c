#include <stdio.h>

int main()
{
    int i = 1, sum = 0, n;
    printf("enter the value of n:\n", n);
    scanf("%d", &n);
    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("the value of 1st 10 natural numbers is: %d", sum);

    return 0;
}