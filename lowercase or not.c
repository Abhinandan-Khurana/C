#include <stdio.h>

int main()
{
    char ch;
    // in ascii from 97-122 = a-z
    // and ascii is already included in stdio.h library..
    printf("Enter the character:\n");
    scanf("%c", &ch);

    if (ch <= 122 && ch >= 97)
    {
        printf("It is lowercase\n");
    }

    else
    {
        printf("It is not lowercase\n");
    }
    return 0;
}