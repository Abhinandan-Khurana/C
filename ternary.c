#include <stdio.h>

int main()
{
    int a;
    printf("Enter your number\n");
    scanf("%d", &a);
    // one liner if statement
    (a < 5) ? printf("A is less then 5") : printf("A is not less than 5");
    return 0;
}