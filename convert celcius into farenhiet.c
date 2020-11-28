#include <stdio.h>

int main()
{
    float celcius;
    float farenheit;
    printf("enter the celcius value\n");
    scanf("%f", &celcius);
    printf("your farenheit value is %f\n", (celcius * 9 / 5) + 32);
    return 0;
}