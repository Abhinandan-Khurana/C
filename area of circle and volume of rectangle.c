#include <stdio.h>

int main()
{
    int radius;
    float pi = 3.14;
    int height;
    printf("enter the radius\n");
    scanf("%d", &radius);
    printf("enter the height\n");
    scanf("%d" , &height);
    printf("area of the circle is %f\n", pi*radius*radius);
    printf("volume of the cylinder is %f\n", pi*radius*radius*height);
    return 0;
}