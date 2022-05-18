#include<stdio.h>
int main()
{
    int a,b,c,d,e,avg;
    printf("enter the maths marks:");
    scanf("%d",&a);
    printf("enter the computer marks:");
    scanf("%d",&b);
    printf("enter the science marks:");
    scanf("%d",&c);
    printf("enter the chemistry marks:");
    scanf("%d",&d);
    printf("enter the physics marks:");
    scanf("%d",&e);
    avg=(a+b+c+d+e)/5;
    printf("the average of five marks is:%d",avg);
    return 0;
}
