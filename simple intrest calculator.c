#include<stdio.h>

int main(){
    int principle,rate,time;
    printf("enter the principle\n");
    scanf("%d" , &principle);
    printf("enter the rate\n");
    scanf("%d" , &rate);
    printf("enter the time\n");
    scanf("%d" , &time);
    printf("your simple intrest is--> %d\n", (principle*rate*time)/100);
    return 0;
}