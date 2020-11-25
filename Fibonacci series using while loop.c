#include <stdio.h>
int main()
{
    int a = 0, b = 1, c, i = 1, n;
    printf("enter the value upto which limit you want the fibonacci series:");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\t", a);
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    return 0;
}