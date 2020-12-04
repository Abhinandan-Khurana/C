#include <stdio.h>

int main()
{
    char a = 'a';

    while (a >= 'a' && a <= 'z')
    {
        printf("%d %c\n", a, a);
        a++;
    }

    return 0;
}