#include<stdio.h>

int main(){
    int a, b, c, d;
    printf("enter the value of a\n");
    scanf("%d" , &a);
    printf("enter the value of b\n");
    scanf("%d" , &b);
    printf("enter the value of c\n");
    scanf("%d" , &c);
    printf("enter the value of d\n");
    scanf("%d" , &d);

    if(a>b && a>c && a>d){
        printf("the greatest number is a\n");
    }

    if(b>a && b>c && b>d){
        printf("the greatest number is b\n");
    }

    if(c>a && c>b && c>d){
        printf("the greatest number is c\n");
    }

    if(d>a && d>b && d>c){
        printf("the greatest number is d\n");
    }
    return 0;
}