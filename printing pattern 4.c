#include <stdio.h>
int main()
{
    int n;
    printf("enter the value for the size of the pattern:");
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}