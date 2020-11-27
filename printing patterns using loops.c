#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int length = 2 * n - 1;
    int min1, min2, min;
    // Complete the code to print the pattern.
    // for rows
    for (int i = 1; i <= length; i++)
    {
        // for column
        for (int j = 1; j <= length; j++)
        {
            // min diff btw vertical sides
            min1 = i <= length - i ? i - 1 : length - i;
            // min diff btw horizontal sides
            min2 = j <= length - j ? j - 1 : length - j;
            // min diff btw vertical & horizontal sides
            min = min1 <= min2 ? min1 : min2;
            // print
            printf("%d ", n - min);
        }
        printf("\n");
    }
    return 0;
}