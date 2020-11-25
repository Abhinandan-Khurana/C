#include <stdio.h>
int main()
{
    int a = 0, b = 1, c, d;
    printf("enter the upper limit to which you want the fibonacci number up to:");
    scanf("%d", &d);
    printf("Fibonacci Series:-->");
    for (int i = 1; i <= d; i++)
    {
        printf("%d\t",a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}