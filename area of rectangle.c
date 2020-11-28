#include<stdio.h>

int main(){
    int length, breadth;
    int area = length*breadth;
    printf("enter your length\n");
    scanf("%d" , &length);
    printf("enter ytour breadth\n");
    scanf("%d" , &breadth);

    printf("area is %d", length*breadth);
    return 0;
}